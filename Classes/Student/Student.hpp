/*
   Class for a student with several courses

   Gilberto Echeverria
   26/11/2019
*/

#include <iostream>
// Allow the creation of a list of objects
#include <vector>
// Include the class for a course
#include "Course.hpp"

using namespace std;

class Student {
    private:
        // Attributes
        string name;
        string id; // Matricula
        int num_courses;
        // List of the student courses
        vector<Course> courses;
        int grade;
    public:
        // Constructor
        Student(string _name, string _id);
        // Public methods
        void addCourse(string course_name);
        void setCourseGrade(string course_name, int grade);
        int computeGrade();
};

// Constructor method
Student::Student(string _name, string _id)
{
    name = _name;
    id = _id;
    num_courses = 0;
}

void Student::addCourse(string course_name)
{
    // Create a new instance of the Course class
    Course new_course(course_name);
    // Add a new course to the vector
    // The method 'push_back' is equivalent to 'append' in Python
    courses.push_back(new_course);
    num_courses++;
}

void Student::setCourseGrade(string course_name, int grade)
{
    // Loop over all elements in the list
    for (int i=0; i<num_courses; i++)
    {
        // Check the name of each course, using the method in Course class
        if (courses[i].getName() == course_name)
        {
            // Modify the grade of the course
            courses[i].setGrade(grade);
            return;
        }
    }
    cout << "Course not found!" << endl;
}

int Student::computeGrade()
{
    int total = 0;

    // Loop over all elements in the list
    for (int i=0; i<num_courses; i++)
    {
        total += courses[i].getGrade();
    }

    // Compute the average and store it in the 'grade' variable
    grade = total / num_courses;

    return grade;
}
