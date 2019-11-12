/*
    Functions to get the area and volume of a sphere

    Gilberto Echeverria
    07/11/2019
*/

#include <iostream>
// Library required for using mathematical functions and constants
#include <cmath>

using namespace std;

// The original function in Python
/*
def area_esfera(radio):
    return 4 * math.pi * (radio ** 2)
*/

// Equivalent function in C++
float sphere_area(float radio)
{
    // M_PI is a constant that can be found in the math library
    // pow is a function, also from math library
    return 4 * M_PI * pow(radio, 2);
}

float sphere_volume(float radio)
{
    return (4/3) * M_PI * pow(radio, 3);
}

int main()
{
    float radius;
    float area;
    float volume;

    cout << "Enter the radius: ";
    cin >> radius;

    area = sphere_area(radius);
    volume = sphere_volume(radius);

    cout << "Area is: " << area << endl;
    cout << "Volume is: " << volume << endl;

    return 0;
}
