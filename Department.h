#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
#include <iostream>
#include "UniversityMember.h"
using namespace std;
// this is my last department class 
class Department{
string departmentName;
UniversityMember* members[50];
int memberCount;
public:
// constructor below 
Department(string departmentName);
void addMember(UniversityMember* member);
void displayAllRoles();

};
#endif