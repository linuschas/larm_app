#ifndef CONSOLE_INPUT_H
#define CONSOLE_INPUT_H

#include <string>

class ConsoleInput {
public:
    std::string getString(std::string title);
    int getInt(std::string title);
};

#endif