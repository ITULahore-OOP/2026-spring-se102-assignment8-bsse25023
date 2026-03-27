#include "Staff.h"
#include <iostream>
using namespace std;
// this is my staff class 
// ffirst of all I will initialze the constructor 
Staff::Staff(string name, int memberId, double salary, AccessCard card):UniversityMember(name, memberId),card(card){
    this -> salary = salary;
    this-> card = card;
} // done initialzing the Constructor 
double Staff::getSalary(){
    return salary;
}
void Staff::displayRole(){
cout << "Role: Staff" << endl;
}
void Staff::displayCard(){
card.displayCardInfo();
}