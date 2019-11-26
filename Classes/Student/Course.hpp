/*
    Class for a single course taken by a student
    This class is very simple. All the code for the methods is included inside the class definition
    Doing that does not really make the class bigger, nor harder to read.

    Gilberto Echeverria
    26/11/2019
*/

#include <iostream>

using namespace std;

class Course {
    private:
        // Attributes
        string name;
        int grade;
    public:
        // All the methods are fully defined below
        // Constructor
        Course(string _name) { name = _name; }
        // Public methods to access the attributes
        string getName() { return name; }
        int getGrade() { return grade; }
        void setGrade(int _grade) { grade = _grade; }
};
