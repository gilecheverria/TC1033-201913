/*
    Class for a hotel

    Gilberto Echeverria
    24/11/2019
*/

#include <iostream>
// Include the class 'vector' to create dynamic lists (like those in Python)
#include <vector>
// Include the class for a Room
#include "Room.hpp"

using namespace std;

class Hotel {
    private:
        string name;
        int num_rooms;
        // Create a list of objects of type Room
        // There are no rooms assigned yet, only the list
        vector<Room> rooms;

        // Private method
        int nextAvailable();
    public:
        // Constructor
        Hotel(string _name, int _rooms);
        // Public methods
        string getName();
        bool hasFreeRooms();
        bool checkIn(Person _guest);
        bool checkOut(Person _guest);
        bool checkOut(string guest_name);
        // Methods for the user interaction
        int printMenu();
        bool takeAction(int option);
        void userMenu();
        void display();
};

Hotel::Hotel(string _name, int _rooms)
{
    name = _name;
    num_rooms = _rooms;
    // Set the list to the size required.
    // This also creates new rooms to fill the list,
    // and the empty constructor for the room is called for each one
    rooms.resize(num_rooms);
    // Assign the number to each room
    for (int i=0; i<num_rooms; i++)
    {
        // Increment the index by 1 to make it more human readable
        rooms[i].setNumber(i + 1);
    }
}

string Hotel::getName()
{
    return name;
}

// Find the index of the next free room
int Hotel::nextAvailable()
{
    for (int i=0; i<num_rooms; i++)
    {
        if (rooms[i].isAvailable())
        {
            return i;
        }
    }
    // A value of -1 means that no rooms are free
    return -1;
}

bool Hotel::hasFreeRooms()
{
    if (nextAvailable() >= 0)
    {
        return true;
    }
    // If the return value of 'nextAvailable' is negative, there are no rooms
    else
    {
        return false;
    }
}

// Assign a guest to the first room available
bool Hotel::checkIn(Person _guest)
{
    int nextRoom = nextAvailable();

    if (nextRoom >= 0)
    {
        // Call the method of the Room class, to store the guest inside the room
        rooms[nextRoom].registerGuest(_guest);
        cout << "Guest: " << _guest.getName() << " assigned to room " << nextRoom + 1 << endl;
        return true;
    }
    else
    {
        cout << "No rooms avaialble. Sorry" << endl;
        return false;
    }
}

// New method to check out a person, given only the name
bool Hotel::checkOut(string guest_name)
{
    // Look for the guest in all the rooms
    for (int i=0; i<num_rooms; i++)
    {
        // If the person is found, set the room as available again
        if (rooms[i].getGuestName() == guest_name)
        {
            rooms[i].free();
            return true;
        }
    }
    cout << "The guest " << guest_name << " is not staying in this hotel" << endl;
    return false;
}

// Use the previous method to avoid code duplication
bool Hotel::checkOut(Person _guest)
{
    return checkOut(_guest.getName());
}

// Print menu and ask the user for a selection
int Hotel::printMenu()
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
// Return a bool indicating whether the program should loop again
bool Hotel::takeAction(int option)
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
        if (checkIn(guest))
        {
            cout << "Welcome to " << name << ", " << guest.getName() << endl;
        }
    }
    else if (option == 2)
    {
        // Ask for the client name
        string name;
        cout << "Enter the name of the guest: ";
        cin >> name;
        // See if he is in the hotel
        if (checkOut(name))
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
void Hotel::userMenu()
{
    int option;
    bool loop = true;

    while (loop)
    {
        // Show the current status of the hotel
        display();
        // Show the possible options
        option = printMenu(); 
        // Follow the user's request
        loop = takeAction(option);
    }
}

// Print the occupancy status of the hotel
void Hotel::display()
{
    cout << "\n== Hotel " << name << " ==" << endl;
    for (int i=0; i<num_rooms; i++)
    {
        rooms[i].display();
    }
}
