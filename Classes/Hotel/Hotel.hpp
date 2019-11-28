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
        Hotel(string _name, int _rooms);
        string getName();
        bool hasFreeRooms();
        bool checkIn(Person _guest);
        bool checkOut(Person _guest);
        bool checkOut(string guest_name);
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

// Print the occupancy status of the hotel
void Hotel::display()
{
    cout << "\n== Hotel " << name << " ==" << endl;
    for (int i=0; i<num_rooms; i++)
    {
        rooms[i].display();
    }
}
