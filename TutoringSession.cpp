#include "TutoringSession.h"
#include <iostream>
using namespace std; 
// his is my tutoring session class 
// first I will initialize my constructor 
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    this->sessionID=sessionID;
    this->durationMinutes=durationMinutes;
    this->ta=ta;
    this->student=student;
    // done initializing the constructor 
}// following is my getter function 
double TutoringSession::getDuration(){
    return durationMinutes;
} // this is a display function 
void TutoringSession::displaySession(){
     cout<<"Session "<<sessionID<<"Duration "<< durationMinutes<< endl;
} // this is operator overloading function 
TutoringSession TutoringSession::operator+(const TutoringSession& other){
    double total = this->durationMinutes + other.durationMinutes;
 return TutoringSession(0, total, nullptr, nullptr);
 // aassigning nullptr 
}
bool operator>(TutoringSession s1, TutoringSession s2){
    return s1.getDuration() > s2.getDuration();
}
// my this  class ends here 