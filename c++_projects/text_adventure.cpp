#include <iostream>
#include <string>

class AdventureGame {
public:
    void startGame() {
        introduction();
    }

private:
    void introduction() {
        std::cout << "Welcome to the Adventure Game!\n";
        std::cout << "You are standing in front of a mysterious forest. What do you want to do?\n";
        std::cout << "1. Enter the forest\n";
        std::cout << "2. Walk away\n";
        
        int choice;
        std::cin >> choice;
        
        if (choice == 1) {
            enterForest();
        } else if (choice == 2) {
            walkAway();
        } else {
            std::cout << "Invalid choice. Try again.\n";
            introduction();
        }
    }

    void enterForest() {
        std::cout << "\nYou step into the forest. It's dark and eerie.\n";
        std::cout << "After walking for a while, you come to a fork in the path.\n";
        std::cout << "Do you want to:\n";
        std::cout << "1. Take the left path\n";
        std::cout << "2. Take the right path\n";
        
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            leftPath();
        } else if (choice == 2) {
            rightPath();
        } else {
            std::cout << "Invalid choice. Try again.\n";
            enterForest();
        }
    }

    void walkAway() {
        std::cout << "\nYou walk away from the forest, back to safety. Game Over.\n";
    }

    void leftPath() {
        std::cout << "\nYou take the left path and encounter a wild wolf!\n";
        std::cout << "Do you want to:\n";
        std::cout << "1. Fight the wolf\n";
        std::cout << "2. Run away\n";
        
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nYou bravely fight the wolf and defeat it! You are victorious!\n";
        } else if (choice == 2) {
            std::cout << "\nYou run away and safely make it back to the entrance of the forest. Game Over.\n";
        } else {
            std::cout << "Invalid choice. Try again.\n";
            leftPath();
        }
    }

    void rightPath() {
        std::cout << "\nYou take the right path and find a treasure chest!\n";
        std::cout << "Do you want to:\n";
        std::cout << "1. Open the chest\n";
        std::cout << "2. Leave the chest and continue walking\n";
        
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nYou open the chest and find gold and jewels! You are rich!\n";
        } else if (choice == 2) {
            std::cout << "\nYou leave the chest and walk deeper into the forest. You eventually find your way out, but the treasure remains hidden. Game Over.\n";
        } else {
            std::cout << "Invalid choice. Try again.\n";
            rightPath();
        }
    }
};

int main() {
    AdventureGame game;
    game.startGame();
    return 0;
}
