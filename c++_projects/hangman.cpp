#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype> // For tolower()

class WordGuessingGame {
private:
    std::string word;               // The word to guess
    std::string guessedWord;        // Word with correctly guessed letters revealed
    std::vector<char> guessedLetters; // Tracks all guessed letters
    int maxAttempts;                // Maximum number of incorrect guesses allowed
    int incorrectGuesses;           // Current count of incorrect guesses

    void initializeGame(const std::vector<std::string>& wordList) {
        // Seed random number generator
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        // Select a random word from the word list
        word = wordList[std::rand() % wordList.size()];
        guessedWord = std::string(word.size(), '_');
        guessedLetters.clear();
        incorrectGuesses = 0;
    }

    bool isLetterAlreadyGuessed(char letter) const {
        for (char guessed : guessedLetters) {
            if (guessed == letter) {
                return true;
            }
        }
        return false;
    }

    void revealLetter(char letter) {
        for (size_t i = 0; i < word.size(); ++i) {
            if (word[i] == letter) {
                guessedWord[i] = letter;
            }
        }
    }

    void displayStatus() const {
        std::cout << "\nCurrent word: " << guessedWord << "\n";
        std::cout << "Guessed letters: ";
        for (char letter : guessedLetters) {
            std::cout << letter << " ";
        }
        std::cout << "\nIncorrect guesses: " << incorrectGuesses
                  << " / " << maxAttempts << "\n";
    }

public:
    WordGuessingGame(int attempts = 6) : maxAttempts(attempts), incorrectGuesses(0) {}

    void play(const std::vector<std::string>& wordList) {
        initializeGame(wordList);

        while (incorrectGuesses < maxAttempts && guessedWord != word) {
            displayStatus();

            std::cout << "Guess a letter: ";
            char guess;
            std::cin >> guess;

            // Convert guess to lowercase
            guess = std::tolower(guess);

            if (isLetterAlreadyGuessed(guess)) {
                std::cout << "You already guessed that letter.\n";
                continue;
            }

            guessedLetters.push_back(guess);

            if (word.find(guess) != std::string::npos) {
                std::cout << "Correct guess!\n";
                revealLetter(guess);
            } else {
                std::cout << "Incorrect guess.\n";
                ++incorrectGuesses;
            }
        }

        displayStatus();

        if (guessedWord == word) {
            std::cout << "Congratulations! You guessed the word: " << word << "\n";
        } else {
            std::cout << "Game over! The word was: " << word << "\n";
        }
    }
};

int main() {
    // Example word list
    std::vector<std::string> wordList = {"apple", "banana", "cherry", "date", "fig", "grape"};

    WordGuessingGame game(6);
    game.play(wordList);

    return 0;
}
