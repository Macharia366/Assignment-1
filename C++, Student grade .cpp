#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string student_name,grade;
    int marks;

    // Prompt the user to enter student details
    cout << "Enter student name: ";
    cin>> student_name;

    cout << "Enter exam marks: ";
    cin >> marks;

    {
        // Assign grade using an if-else ladder
        if (marks >= 70)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
        
            grade = 'E';
        }

        // Display the student's details and grade
        cout << "========== STUDENT RESULT ==========" << endl;
        cout << "Student Name : " << student_name << endl;
        cout << "Exam Marks   : " << marks << endl;
        cout << "Grade        : " << grade << endl;
        cout << "====================================" << endl;
    }

    return 0;
}