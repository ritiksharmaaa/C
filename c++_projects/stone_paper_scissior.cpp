#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time
#include <string>   // For string handling

// Function to get the computer's choice
std::string getComputerChoice() {
    // List of possible choices
    std::string choices[3] = {"stone", "paper", "scissors"};
    
    // Generate a random index (0, 1, or 2)
    int randomIndex = std::rand() % 3;
    return choices[randomIndex];
}

// Function to determine the winner
std::string determineWinner(const std::string& userChoice, const std::string& computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    }

    if ((userChoice == "stone" && computerChoice == "scissors") ||
        (userChoice == "paper" && computerChoice == "stone") ||
        (userChoice == "scissors" && computerChoice == "paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::string userChoice;
    std::string computerChoice;

    // Get the user's choice
    std::cout << "Enter your choice (stone, paper, or scissors): ";
    std::cin >> userChoice;

    // Validate the user's input
    while (userChoice != "stone" && userChoice != "paper" && userChoice != "scissors") {
        std::cout << "Invalid input! Please enter stone, paper, or scissors: ";
        std::cin >> userChoice;
    }

    // Get the computer's choice
    computerChoice = getComputerChoice();

    // Display the choices
    std::cout << "You chose: " << userChoice << std::endl;
    std::cout << "The computer chose: " << computerChoice << std::endl;

    // Determine the winner and display the result
    std::cout << determineWinner(userChoice, computerChoice) << std::endl;

    return 0;
}
