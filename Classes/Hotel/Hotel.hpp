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

