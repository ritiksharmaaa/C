#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

class Movie {
public:
    std::string title;
    int releaseYear;
    std::string director;
    std::string genre;
    std::string cast;
    std::string plot;
    float rating;
    std::string review;

    Movie(std::string t, int rY, std::string d, std::string g, std::string c, std::string p, float r = 0, std::string rev = "")
        : title(t), releaseYear(rY), director(d), genre(g), cast(c), plot(p), rating(r), review(rev) {}

    // Convert movie object to CSV line
    std::string toCSV() const  {
        std::ostringstream oss;
        oss << title << "," << releaseYear << "," << director << "," << genre << "," << cast << "," << plot << "," << rating << "," << review;
        return oss.str();
    }

    // Create a movie from CSV line
    static Movie fromCSV(const std::string &csvLine) {
        std::stringstream ss(csvLine);
        std::string title, director, genre, cast, plot, review;
        int releaseYear;
        float rating;

        std::getline(ss, title, ',');
        ss >> releaseYear;
        ss.ignore();
        std::getline(ss, director, ',');
        std::getline(ss, genre, ',');
        std::getline(ss, cast, ',');
        std::getline(ss, plot, ',');
        ss >> rating;
        ss.ignore();
        std::getline(ss, review);

        return Movie(title, releaseYear, director, genre, cast, plot, rating, review);
    }

    // Display movie details
    void display()  const {
        std::cout << "Title: " << title << "\n"
                  << "Release Year: " << releaseYear << "\n"
                  << "Director: " << director << "\n"
                  << "Genre: " << genre << "\n"
                  << "Cast: " << cast << "\n"
                  << "Plot: " << plot << "\n"
                  << "Rating: " << rating << "\n"
                  << "Review: " << review << "\n\n";
    }
};

class MovieDatabase {
private:
    std::vector<Movie> movies;
    const std::string filename = "movies.csv";

    void loadMovies() {
        std::ifstream file(filename);
        std::string line;
        movies.clear();

        while (std::getline(file, line)) {
            if (!line.empty()) {
                movies.push_back(Movie::fromCSV(line));
            }
        }

        file.close();
    }

    void saveMovies() {
        std::ofstream file(filename);
        for (const auto &movie : movies) {
            file << movie.toCSV() << "\n";
        }
        file.close();
    }

public:
    MovieDatabase() {
        loadMovies();
    }

    void addMovie() {
        std::string title, director, genre, cast, plot, review;
        int releaseYear;
        float rating;

        std::cout << "Enter movie title: ";
        std::cin.ignore();
        std::getline(std::cin, title);
        std::cout << "Enter release year: ";
        std::cin >> releaseYear;
        std::cout << "Enter director: ";
        std::cin.ignore();
        std::getline(std::cin, director);
        std::cout << "Enter genre: ";
        std::getline(std::cin, genre);
        std::cout << "Enter cast: ";
        std::getline(std::cin, cast);
        std::cout << "Enter plot summary: ";
        std::getline(std::cin, plot);
        std::cout << "Enter rating (0-10): ";
        std::cin >> rating;
        std::cout << "Enter review: ";
        std::cin.ignore();
        std::getline(std::cin, review);

        movies.push_back(Movie(title, releaseYear, director, genre, cast, plot, rating, review));
        saveMovies();
        std::cout << "Movie added successfully!\n";
    }

    void editMovie() {
        std::string title;
        std::cout << "Enter the title of the movie you want to edit: ";
        std::cin.ignore();
        std::getline(std::cin, title);

        auto it = std::find_if(movies.begin(), movies.end(), [&title](const Movie &movie) {
            return movie.title == title;
        });

        if (it != movies.end()) {
            Movie &movie = *it;
            std::cout << "Editing movie: " << movie.title << "\n";
            addMovie();  // Reuse the addMovie method to update the movie
        } else {
            std::cout << "Movie not found!\n";
        }
    }

    void deleteMovie() {
        std::string title;
        std::cout << "Enter the title of the movie you want to delete: ";
        std::cin.ignore();
        std::getline(std::cin, title);

        auto it = std::remove_if(movies.begin(), movies.end(), [&title](const Movie &movie) {
            return movie.title == title;
        });

        if (it != movies.end()) {
            movies.erase(it, movies.end());
            saveMovies();
            std::cout << "Movie deleted successfully!\n";
        } else {
            std::cout << "Movie not found!\n";
        }
    }

    void searchMovie() {
        std::string title;
        std::cout << "Enter the title of the movie you want to search for: ";
        std::cin.ignore();
        std::getline(std::cin, title);

        auto it = std::find_if(movies.begin(), movies.end(), [&title](const Movie &movie) {
            return movie.title == title;
        });

        if (it != movies.end()) {
            it->display();
        } else {
            std::cout << "Movie not found!\n";
        }
    }

    void sortMovies() {
        int choice;
        std::cout << "Sort movies by:\n1. Title\n2. Release Year\n3. Genre\nEnter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::sort(movies.begin(), movies.end(), [](const Movie &a, const Movie &b) {
                    return a.title < b.title;
                });
                break;
            case 2:
                std::sort(movies.begin(), movies.end(), [](const Movie &a, const Movie &b) {
                    return a.releaseYear < b.releaseYear;
                });
                break;
            case 3:
                std::sort(movies.begin(), movies.end(), [](const Movie &a, const Movie &b) {
                    return a.genre < b.genre;
                });
                break;
            default:
                std::cout << "Invalid choice!\n";
                return;
        }

        std::cout << "Movies sorted successfully!\n";
    }

    void exportMovies() {
        std::ofstream file("movies_export.csv");
        for (const auto &movie : movies) {
            file << movie.toCSV() << "\n";
        }
        file.close();
        std::cout << "Movies exported to movies_export.csv!\n";
    }

    void importMovies() {
        std::ifstream file("movies_import.csv");
        std::string line;
        while (std::getline(file, line)) {
            movies.push_back(Movie::fromCSV(line));
        }
        file.close();
        saveMovies();
        std::cout << "Movies imported successfully!\n";
    }

    void displayAllMovies() {
        for (const auto &movie : movies) {
            movie.display();
        }
    }
};

int main() {
    MovieDatabase db;
    int choice;

    while (true) {
        std::cout << "\nMovie Database Menu:\n";
        std::cout << "1. Add Movie\n";
        std::cout << "2. Edit Movie\n";
        std::cout << "3. Delete Movie\n";
        std::cout << "4. Search Movie\n";
        std::cout << "5. Sort Movies\n";
        std::cout << "6. Display All Movies\n";
        std::cout << "7. Export Movies to CSV\n";
        std::cout << "8. Import Movies from CSV\n";
        std::cout << "9. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                db.addMovie();
                break;
            case 2:
                db.editMovie();
                break;
            case 3:
                db.deleteMovie();
                break;
            case 4:
                db.searchMovie();
                break;
            case 5:
            db.sortMovies();
            break;
            case 6 :
            db.displayAllMovies();
            break ;
            case 7:
            db.exportMovies();
            break ;
            case 8 :
            db.importMovies();
            break ;
            default:
            std::cout << "Invalid choice";
        }
    }
}
