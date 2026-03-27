#ifndef STAFF_H
#define STAFF_H
// this is the staff class 
#include "UniversityMember.h"
#include "AccessCard.h"
class Staff:virtual public UniversityMember{
double salary;
AccessCard card;
public:
// constructor 
Staff(string name, int memberId, double salary, AccessCard card);
double getSalary();
void displayRole() override;
void displayCard();
};
#endif 