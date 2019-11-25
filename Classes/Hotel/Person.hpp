/*
   Simple implementation of a class for a person

   Gilberto Echeverria
   24/11/2019
*/

#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        string nationality;
        int age;

    public:
        // Constructor
        Person() {}
        Person(string _name, string _nationality, int _age);
        string getName() { return name; }
        void display();
};

// Constructor
Person::Person(string _name, string _nationality, int _age)
{
    name = _name;
    nationality = _nationality;
    age = _age;
}

void Person::display()
{
    cout << "Name: " << name << " from: " << nationality << endl;
}
