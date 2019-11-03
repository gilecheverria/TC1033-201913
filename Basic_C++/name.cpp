/*
    Second example of C++
    Using variables an input from the user

    Gilberto Echeverria
    01/11/2019
*/

// Include a standard library to be able to write to the screen
#include <iostream>

// Starting function. Always named 'main'
int main()
{
    // Declare variables before using them
    // A variable to store a number
    int favourite;
    // A variable to store text
    std::string name;

    // Print a message to the screen
    std::cout << "Welcome to C++" << std::endl;

    // Get input from the user
    std::cout << "Tell me your name: ";
    std::cin >> name;
    std::cout << "Tell me your favourite number: ";
    std::cin >> favourite;

    // Use the variables obtained to print them
    std::cout << "Hi " << name << "!\nNice to meet you!" << std::endl;
    std::cout << "My favourite number is also " << favourite << std::endl;

    // Finish the program, indicating everything went fine
    return 0;
}
