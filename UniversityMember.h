#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <iostream>
#include <string>
using namespace std;
// this is my university member class 
class UniversityMember{
string name;
int memberId;
public:
// constructor 
UniversityMember(string name, int memberId);
 virtual ~UniversityMember(); // destructor 
 // getters 
 string getName();
 int getMemberId();
 int getMemberID();
 // member function 
 virtual void  displayRole() =0;

};








#endif