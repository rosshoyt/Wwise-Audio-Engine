// main.cpp : This file contains the 'main' function. CLI Program execution begins and ends there.
//
#include <iostream>

/**
* Displays the text input commands that the user can execute in the CLI
*/
void showHelpCommands() {
    std::cout << "Commands:\nh = show help menu\nq = exit\n";
}

/**
* CLI program main entry point
*/
int main()
{
    // Flag for exiting program
    bool exit = false;
   

    // Show title message and help commands to user  
    std::cout << "Welcome to the Wwise Integration Test CLI!\n";
    showHelpCommands();
  
    // Accept and process user input
    while(!exit) 
    {
        char userInput;
        std::cin >> userInput;

        // Process user input
        switch (userInput)
        {
        case 'h':
            showHelpCommands();
            break;
        case 'q':
            exit = true;
            break;
        default:
            std::cout << "Command not recognized, try again.\n";
            break;
        }
    }
    std::cout << "Exiting...\n";
    return 0;
}