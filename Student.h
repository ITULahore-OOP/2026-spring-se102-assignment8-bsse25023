#ifndef STUDENT_H
#define STUDENT_H 
#include "UniversityMember.h"
// this is my student class 
class Student : virtual public UniversityMember{
double cgpa;
public:
// constructor
Student(string name, int memberID, double cgpa);
double getCGPA();
void updateCGPA(double newCGPA);
void displayRole() override; 
};
#endif