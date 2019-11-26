/*
    Class for a hotel

    Gilberto Echeverria
    24/11/2019
*/

#include <iostream>
#include <vector>
#include "Room.hpp"

using namespace std;

class Hotel {
    private:
        string name;
        int num_rooms;
        vector<Room> rooms;

        // Private method
        int nextAvailable();
    public:
        Hotel(string _name, int _rooms);
        bool hasFreeRooms();
        bool checkIn(Person _guest);
        bool checkOut(Person _guest);
        void display();
};

Hotel::Hotel(string _name, int _rooms)
{
    name = _name;
    num_rooms = _rooms;
    // Create the list of all the rooms needed
    rooms.resize(num_rooms);
    // Assign the room number to each
    for (int i=0; i<num_rooms; i++)
    {
        rooms[i].setNumber(i + 1);
    }
}

int Hotel::nextAvailable()
{
    for (int i=0; i<num_rooms; i++)
    {
        if (rooms[i].isAvailable())
        {
            return i;
        }
    }
    return -1;
}

bool Hotel::hasFreeRooms()
{
    if (nextAvailable() >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Hotel::checkIn(Person _guest)
{
    int nextRoom = nextAvailable();

    if (nextRoom >= 0)
    {
        rooms[nextRoom].registerGuest(_guest);
        cout << "Guest: " << _guest.getName() << " assigned to room " << nextRoom << endl;
        return true;
    }
    else
    {
        cout << "No rooms avaialble. Sorry" << endl;
        return false;
    }
}

bool Hotel::checkOut(Person _guest)
{
    // Look for the guest in all the rooms
    for (int i=0; i<num_rooms; i++)
    {
        if (rooms[i].getGuestName() == _guest.getName())
        {
            rooms[i].free();
            return true;
        }
    }
    return false;
}

void Hotel::display()
{
    cout << "\n== HOTEL " << name << " ==" << endl;
    for (int i=0; i<num_rooms; i++)
    {
        rooms[i].display();
    }
}
