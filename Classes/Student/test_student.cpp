/*
    Simple program to use the classes Student and Course

    Gilberto Echeverria
    26/11/2019
*/

#include "Student.hpp"

using namespace std;

// Function to work with a single student
void gradeStudent()
{
    string student_name;
    string student_id;
    int num_courses;
    string course_name;
    int course_grade;

    cout << "Enter student name: ";
    cin >> student_name;
    cout << "Enter student id: ";
    cin >> student_id;

    // Create an instance of the student class
    // The constructor is called with the parameters provided here
    Student pupil(student_name, student_id);

    cout << "How many courses? ";
    cin >> num_courses;

    for (int i=0; i<num_courses; i++)
    {
        cout << "Name of the course: ";
        cin >> course_name;
        cout << "Course grade: ";
        cin >> course_grade;

        // Use the methods of the student class
        pupil.addCourse(course_name);
        pupil.setCourseGrade(course_name, course_grade);
    }
    
    // Show the average of the grades
    cout << "The final grade is: " << pupil.computeGrade() << endl;
}

int main()
{
    // Call the function twice to use two different students
    gradeStudent();
    gradeStudent();

    return 0;
}
