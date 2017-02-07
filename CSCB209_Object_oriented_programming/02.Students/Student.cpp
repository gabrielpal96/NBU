#include <iostream>
#include "Student.h"
using namespace std;
 
Student::Student() {
     name = new char[2];
     name = " ";
     grade = 2;
}
 
Student::Student(char * n, double g) {
     name = new char[strlen(n) + 1];
     strcpy(name, n);
     
     if (g >= 2 && g <= 6) { 
        grade = g;
     }
     else if (g < 2) { 
        grade = 2; 
     }
     else { 
        grade = 6;
     }
}
 
void Student::read() {
     cout << "Enter student name: ";
     name = new char[256];
     cin.getline(name, 255);
     cout << "Enter student grade: ";
     
     do {
         cin >> grade;
     } while (grade < 2 || grade > 6);
     cin.ignore();
}
 
void Student::setName(char * n) {
     name = new char[strlen(n) + 1];
     strcpy(name, n);
}
 
void Student::setGrade(double g)
{
     if (g >= 2 && g <= 6) { 
        grade = g; 
     }
     else if (g<2) { 
        grade = 2; 
     }
     else { 
        grade = 6; 
     }
}
 
bool Student::is_better_than(Student s) const {
     return grade > s.grade ? true : false;
}
 
void Student::print() const {
     cout << "Name of student: " << name << endl;
     cout << "GPA student: " << grade << endl;
}
 
char * Student::getName() const { 
    return name;
}
 
double Student::getGrade()const { 
    return grade; 
}
