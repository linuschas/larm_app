#ifndef CONTEXT_MENU_H
#define CONTEXT_MENU_H

#include <string>
#include <vector>

class ContextMenu {
public:
    std::vector<std::string> options = {};

    ContextMenu(std::vector<std::string> options);

    // Options added to the back, for every menu
    std::vector<std::string> defaultOptions = {
        "Exit", 
    };

    // int getInput(std::vector<std::string> options);
    int getInput();
};

#endif