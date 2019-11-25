#include <iostream>
#include "Hotel.hpp"

using namespace std;

int main()
{
    // Create class instances
    Hotel luchito("Don Lucho", 3);
    Person guest_1 ("Patrick", "USA", 2);
    Person guest_2 ("Laure", "France", 3);
    Person guest_3 ("Mukesh", "India", 5);
    Person guest_4 ("Nahomi", "Japan", 2);

    // Show the initial state
    luchito.display();

    luchito.checkIn(guest_1);
    luchito.checkIn(guest_2);

    luchito.display();

    luchito.checkOut(guest_1);

    luchito.display();

    return 0;
}
