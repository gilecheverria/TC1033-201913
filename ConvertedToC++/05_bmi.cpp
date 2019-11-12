/*
Compute the Body Mass Index and show the result

Gilberto Echeverria
11/11/2019
*/

#include <iostream>
#include <cmath>

using namespace std;

float getBMI(float height, float weight)
{
    float bmi = weight / pow(height, 2);
    return bmi;
}
   

void printBMI(float bmi)
{
    if (bmi < 20)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "Normal" << endl;
    }
    else if (bmi < 30)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Morbid overweight" << endl;
    }
}

int main()
{
    float height;
    float weight;
    float bmi;
    
    cout << "=== BMI CALCULATOR ===" << endl;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your weight: ";
    cin >> weight;
    
    // Compute the BMI
    // Call a function that returns a value
    bmi = getBMI(height, weight);
    cout << "Your BMI is " << bmi << endl;
    // Call a function that does not return anything
    printBMI(bmi);
    
    
    return 0;
}