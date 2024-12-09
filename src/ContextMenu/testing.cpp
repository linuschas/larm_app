#include <iostream>
#include "ContextMenu.h"

// No fancy catch2 mechanism here, since it would not be feasible to test the console input/output
// This is a simple integration test to see if the ContextMenu class works as expected

// Disabled to prevent main redefinition
// int main() {
//     // Example of sign in page
//     ContextMenu menu({"Log In", "Sign Up", "See Guidelines"});
//     int choice = menu.getInput();

//     std::cout << "You chose option " << choice << std::endl;

//     // Example of a user account page
//     ContextMenu menu2({"See Alarms", "Manage Account", "Test Alarms (10s)", "Contact Provider"});
//     int choice2 = menu2.getInput();

//     std::cout << "You chose option " << choice2 << std::endl;

//     return 0;
// }