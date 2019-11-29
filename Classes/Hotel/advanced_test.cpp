#include <iostream>
#include <vector>
#include "Hotel.hpp"

using namespace std;

int main()
{
    // Create a new instance of the hotel
    Hotel hotel("Don Lucho", 3);

    // Call the method in the hotel class, to interact with the user
    hotel.userMenu();

    return 0;
}
