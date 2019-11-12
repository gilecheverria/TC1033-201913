/*
    Convert exercise 3 of Python
    A couple of equations as functions

    Gilberto Echeverria
    09/11/2019
*/

#include <iostream>
// Library required for using mathematical functions and constants
#include <cmath>

using namespace std;

// New function to convert from degrees to radians
// There is no default function for that in C++
float degreesToRadians(float angle_deg)
{
    // The result of this operation will always be float,
    //  because M_PI has decimals
    return angle_deg * M_PI / 180;
}

// This function receives a floating value for the angle, in degrees
// It will return another float
float equation_1(float angle_deg)
{
    // Declare and assign a value to variables
    float angle_rad = degreesToRadians(angle_deg);
    float result = pow(sin(1 / angle_rad), 2) / x;
    return result;
}

// Second equation
float equation_2(float angle_deg)
{
    float angle_rad = degreesToRadians(angle_deg);
    float result = pow(sin(angle_rad), 1/3) / (4 * x) + 5 * M_PI * angle_rad * tan(pow(angle_rad, 2));
    return result;
}

int main()
{
    float angle = 90;
    
    cout << degreesToRadians(angle) << endl;

    return 0;
}
