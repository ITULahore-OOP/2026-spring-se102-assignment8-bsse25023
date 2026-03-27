#include "Student.h"
#include <iostream>
using namespace std;
// this is my student class 
// first I will initialize my constructor 
Student::Student(string name, int memberId, double cgpa):UniversityMember(name,memberId){
    this->cgpa=cgpa;
}  // done initializing the constructor 
double Student::getCGPA(){
    return cgpa;
}
void Student::updateCGPA(double newCGPA){
    cgpa= newCGPA; // updated the gpa 
}
void Student::displayRole(){
cout << "Role: Student" << endl;
}
// my this classs ends here 
