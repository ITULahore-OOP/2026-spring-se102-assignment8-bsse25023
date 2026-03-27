#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include "Student.h"
#include <iostream>
#include "TeachingAssistant.h"
// this is my tutoring session class 
class TutoringSession{
int sessionID;
double durationMinutes;
TeachingAssistant* ta ;
Student* student;  // demonstrates association 
public: 
// constructor 
TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
// following are my member functions 
double getDuration();
void displaySession();
TutoringSession operator+(const TutoringSession& other); 
};
#endif 
bool operator>(TutoringSession s1, TutoringSession s2);