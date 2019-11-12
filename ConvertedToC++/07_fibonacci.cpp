/*
Print a series of numbers from the Fibonacci sequence

Gilberto Echeverria
11/11/2019
*/

#include <iostream>

using namespace std;

void printFibonacci(int number)
{
    int a = 0;
    int b = 1;
    int c;
    int counter = 2;
    
    if (number < 1)
    {
        cout << "The number of elements must be greater than 0" << endl;
    }
    else if (number == 1)
    {
        cout << a << " ";
    }
    else if (number == 2)
    {
        cout << a << " " << b << " ";
    }
    else
    {
        cout << a << " " << b << " ";
        while (counter < number)
        {
            c = a + b;
            cout << c << " ";
            counter++;
            a = b;
            b = c;
        }
    }
    // Print a new line at the end of the series
    cout << endl;
}

int main()
{
    int number;
    
    cout << "How many Fibonacci elements to print? ";
    cin >> number;
    printFibonacci(number);
    
    return 0;
}