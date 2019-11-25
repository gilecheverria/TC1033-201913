/*
    Class for a room in a hotel

    Gilberto Echeverria
    24/11/2019
*/

#include <iostream>
#include "Person.hpp"

using namespace std;

class Room {
    private:
        int number;
        bool available;
        Person guest;
    public:
        // Constructor
        Room();
        // Methods
        void setNumber(int _number);
        bool isAvailable();
        string getGuestName();
        void free();
        void registerGuest(Person _guest);
        void display();
};


Room::Room()
{
    available = true;
}

void Room::setNumber(int _number)
{
    number = _number;
}

bool Room::isAvailable()
{
    return available;
}

string Room::getGuestName()
{
    return guest.getName();
}

void Room::free()
{
    available = true;    
}
    
void Room::registerGuest(Person _guest)
{
    available = false;
    guest = _guest;
}

void Room::display()
{
    if (available)
    {
        cout << "Room " << number << " available" << endl;
    }
    else
    {
        cout << "Room " << number << " occupied by guest: ";
        guest.display();
    }
}
