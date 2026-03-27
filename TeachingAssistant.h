#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
// this is my teaching assistnt class 
#include "Student.h"
#include "Staff.h"
class TeachingAssistant:public Student,public Staff{
int workingHours;
public:
// following is my constructor 
TeachingAssistant(string name, int memberId, double cgpa, double  salary, AccessCard card,int workingHours);
void displayRole() override;
void gradeAssignment(int score);
void gradeAssignment(string letterGrade);
};
#endif 