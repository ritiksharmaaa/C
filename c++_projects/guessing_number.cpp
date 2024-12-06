#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int target = std::rand() % 100 + 1;

    int guess = 0;  // User's guess
    int attempts = 0;  // Counter for the number of attempts

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100.\n";
    std::cout << "Try to guess it!\n";

    // Loop until the user guesses correctly
    while (guess != target) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < target) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > target) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}
