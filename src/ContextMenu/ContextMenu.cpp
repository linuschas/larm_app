#include "ContextMenu.h"

#include <iostream>
#include <vector>
#include <string>
#include <limits> // For std::numeric_limits

ContextMenu::ContextMenu(std::vector<std::string> options) : options(options) {};

// int ContextMenu::getInput(std::vector<std::string> options) {
int ContextMenu::getInput() {
    std::string menuOptions = "";

    int optionsSize = this->options.size(); // Cache, since it is used to offset the default option indexes

    // Add the options you want for this specific menu
    for (int i = 0; i < optionsSize; i++) {
        int optionIdx = i + 1;

        menuOptions += std::to_string(optionIdx) + ". " + this->options[i] + '\n';
    };

    // Add default options
    for (int i = 0; i < this->defaultOptions.size(); i++) {
        int optionIdx = i + optionsSize + 1;

        menuOptions += std::to_string(optionIdx) + ". " + this->defaultOptions[i] + '\n';
    }

    std::cout << menuOptions << std::endl;

    int choice;
    int maxChoices = optionsSize + this->defaultOptions.size();
    while (1) {
        std::cout << "> ";
        std::cin >> choice;

        if (choice && choice >= 1 && choice <= maxChoices) {
            return choice;
        } else {
            std::cout << "Invalid input, please try again...\n" << std::endl;
            std::cout << menuOptions << std::endl;
        }

        // Clear the input buffer to avoid infinite loops on invalid input
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
    }
}