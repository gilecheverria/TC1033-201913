/*
Example of do while

Gilberto Echeverria
11/11/2019
*/

#include <iostream>

using namespace std;

float average()
{
    float number;
    float total = 0;
    float average;
    int counter = 0;
    
    do 
    {
        cout << "Enter a positive number (negative to finish): ";
        cin >> number;
        if (number >= 0)
        {
             total += number;
            counter++;
        }
    } while (number >= 0);
    
    average = total / counter;
    
    return average;
}

int main()
{
    float avg = average();
    cout << "The average is: " << avg << endl;
    
    return 0;
}