#include <iostream>
#include "ConsoleInput.h"

// No fancy catch2 mechanism here, since it would not be feasible to test the console input/output
// This is a simple integration test to see if the ContextMenu class works as expected

// Disabled to prevent main redefinition
// int main() {
//     ConsoleInput cI;

//     // Grabbing a name, as a string
//     std::string input = cI.getString("Enter your name:");
//     std::cout << "You entered: " << input << std::endl;

//     // Grabbing an age, as an integer
//     int number = cI.getInt("Enter your age:");
//     std::cout << "You entered: " << number << std::endl;

//     return 0;
// }