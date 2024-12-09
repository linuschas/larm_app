#include "ConsoleInput.h"
#include <iostream>

std::string ConsoleInput::getString(std::string title) {
    std::string input;

    std::cout << title << std::endl;
    std::cout << "> ";
    std::getline(std::cin, input);

    return input;
}

int ConsoleInput::getInt(std::string title) {
    int input;

    std::cout << title << std::endl;
    std::cout << "> ";
    std::cin >> input;

    return input;
}