#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Book
{
private:
    string title;
    string authore;
    string isbn;
    bool available;

public:
    Book() : title(""), authore(""), isbn(""), available(true) {};
    void setTitle(string ttl)
    {
        title = ttl;
    };
    void setAuthore(string auth)
    {
        authore = auth;
    };
    void setISBN(string isbn)
    {
        this->isbn = isbn;
    }
    string getTitle()
    {
        return title;
    }
    string getAuthore()
    {
        return authore;
    }
    string getISBN()
    {
        return isbn;
    }
    void setAvailabe(bool isavail)
    {
        available = isavail;
    };
    string getAvailabe()
    {
        return (available ? "Yes" : "Checkout");
        // return to_string(available); not give good hint 
    }

    void borrowBook()
    {
        if (available)
        {

            available = false;
        }
        else
        {
            cout << "Book is not available" << endl;
        };
    };
    void returnBook()
    {
        if (!available)
        {
            available = true;
        }
        else
        {
            cout << "Book is already available" << endl;
        }
    }
    // void returnBook(){};
};

class Library
{
private:
    Book *books;
    int maxBook;
    int bookcount = 0;

public:
    Library(int libCap) : maxBook(libCap), books(new Book[maxBook]) {};

    ~Library()
    {
        delete[] books;
    }
    bool addBook(const Book &book)
    {
        if (bookcount < maxBook)
        {
            books[bookcount] = book;
            bookcount++;
            return true;
        }
        else
        {
            return false;
        }
    }

    Book *findBook(const string &isbn)
    {
        for (int i = 0; i < bookcount; i++)
        {
            if (books[i].getISBN() == isbn)
            {
                return &books[i];
            }
        }
        return nullptr;
    }

    bool removeBook(const string &isbn)
    {
        for (int i = 0; i < bookcount; i++)
        {
            if (books[i].getISBN() == isbn)
            {
                for (int j = i; j < bookcount - 1; j++)
                {
                    books[j] = books[j + 1];
                }
                return true;
            }
        }
        return false;
    }

    void main()
    {
        int choice;
        string title, author, isbn;
        while (true)
        {
            std ::cout << "\nWelcome to the library management system!\n\n";
            std::cout << "Menu:\n";
            std::cout << "1. Add book\n";
            std::cout << "2. Remove book\n";
            std::cout << "3. Search for book\n";
            std::cout << "4. Exit\n\n";
            std::cout << "Enter your choice: ";

            while (!(cin >> choice) || choice < 1 || choice > 4)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number between 1 and 4: ";
            };
            switch (choice)
            {
            case 1:
            {
                Book Nbook;
                cout << "Enter the Book Title ";
                cin >> title;
                Nbook.setTitle(title);
                cout << "Enter the Book Author ";
                cin >> author;
                Nbook.setAuthore(author);
                cout << "Enter the Book ISBN ";
                cin >> isbn;
                Nbook.setISBN(isbn);
                this->addBook(Nbook);
                break;
            }
            case 2:
            {
                cout << "Enter the ISBN of the book to remove ";
                cin >> isbn;
                if (this->removeBook(isbn))
                {
                    cout << "Book removed successfully" << endl;
                }
                else
                {
                    cout << "Book not found" << endl;
                }
                break;
            }
            case 3:
            {
                cout << "Enter the ISBN of the book to search ";
                cin >> isbn;
                Book *foundBook = this->findBook(isbn);
                if (foundBook)
                {   cout << "Enter book ISBN " << foundBook->getISBN() << endl;
                    cout << "Book Information : " << endl ;
                    cout << "Title: " << foundBook->getTitle() << endl;
                    cout << "Author: " << foundBook->getAuthore() << endl;
                    cout << "ISBN: " << foundBook->getISBN() << endl;
                    cout << "Available: " << foundBook->getAvailabe() << endl;
                }
                break;
            }
            case 4 :{

                    std::cout << "Thank you for using the library management system!\n";
                    return;
            }
            };
        };
    }
};

int main()
{
    Library myLibrary(10);
    myLibrary.main();
    return 0;
}
// int main(){
//     int library_capacity = 100;

//     Book* myBook = new Book[library_capacity];
//     return 0 ;
// };