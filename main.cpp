#include "Student.h"
#include "Staff.h"
#include "AccessCard.h"
#include <iostream>
using namespace std;
int main(){
AccessCard card("AC101", 15);
Student s1("Moryom", 15, 7.6); // creating student object
s1.displayRole(); // calling function using objects 
Staff s("Maryam", 25, 250000, card);
s.displayRole();

 return 0;
}
