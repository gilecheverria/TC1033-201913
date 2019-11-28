#include <iostream>
#include <vector>
#include "Hotel.hpp"

using namespace std;


// Print menu and ask the user for a selection
int printMenu()
{
    int option;

    // Show the options
    cout << "Menu options:" << endl;
    cout << "  1. Check in new guest" << endl;
    cout << "  2. Check out a guest" << endl;
    cout << "  3. Quit the program" << endl;
    cout << "Select an option: ";
    cin >> option;

    return option;
}

// Handle the user selection from the menu
// Receives a reference to an existing hotel, since it will be modified
// Return a bool indicating whether the program should loop again
bool takeAction(Hotel & hotel, int option)
{
    if (option == 1)
    {
        // Ask for the details of the client
        string name;
        string nationality;
        int age;
        cout << "Enter the name of the guest: ";
        cin >> name;
        cout << "Enter the nationality of the guest: ";
        cin >> nationality;
        cout << "Enter the age of the guest: ";
        cin >> age;
        // Create a new Person object
        Person guest(name, nationality, age);
        // Register the new person in the hotel
        if (hotel.checkIn(guest))
        {
            cout << "Welcome to " << hotel.getName() << ", " << guest.getName() << endl;
        }
    }
    else if (option == 2)
    {
        // Ask for the client name
        string name;
        cout << "Enter the name of the guest: ";
        cin >> name;
        // See if he is in the hotel
        if (hotel.checkOut(name))
        {
            cout << "Good bye " << name << "!" << endl;
        }
    }
    else if (option == 3)
    {
        cout << "Thanks for using the Hotel program. Bye!" << endl;
        return false;
    }
    else
    {
        cout << "Incorrect option. Try again ..." << endl;
    }
    return true;
}

// Function to interact with the Hotel class
void userMenu()
{
    Hotel hotel("Don Lucho", 3);
    int option;
    bool loop = true;

    while (loop)
    {
        // Show the current status of the hotel
        hotel.display();
        // Show the possible options
        option = printMenu(); 
        // Follow the user's request
        loop = takeAction(hotel, option);
    }
}

int main()
{
    userMenu();

    return 0;
}
