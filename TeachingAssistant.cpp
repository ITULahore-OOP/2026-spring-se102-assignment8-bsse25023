#include "TeachingAssistant.h"
#include <iostream>
using namespace std; 
// this is my teachimg assistant class
// first I will initialize the constructor 
#include "TeachingAssistant.h"
using namespace std;

TeachingAssistant::TeachingAssistant(string name, int memberId, double cgpa, double salary, AccessCard card, int workingHours)
: UniversityMember(name, memberId),Student(name, memberId, cgpa),Staff(name, memberId, salary, card){
    this->workingHours=workingHours;
}
// done initialzing the constructor 
// following are my member functions 
void TeachingAssistant::displayRole(){
    cout << "Role: Teaching Assistant" << endl;
} // these are my imple member functions 
void TeachingAssistant::gradeAssignment(int score){
cout << "numeric score: " << score << "/100" << endl;
}
void TeachingAssistant::gradeAssignment(string letterGrade){
cout << "letter grade: " << letterGrade << endl;
}
// my this class ends here 