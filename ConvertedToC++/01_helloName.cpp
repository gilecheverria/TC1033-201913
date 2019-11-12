/*
  My first c++ program

  Gilberto Echeverria
  07/11/2019
*/

#include <iostream>

// Avoid the need to type std:: before standard functions
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Hello there" << endl;

    // Send text to the standard output
    cout << "Enter your name: ";
    // Get data from the standard input and send it to variable 'name'
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Welcome " << name << "!" << endl;
    cout << "In 20 years you will be " << age + 20 << " years old." << endl;


    return 0;
}
