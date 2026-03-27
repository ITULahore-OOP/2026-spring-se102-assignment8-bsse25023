#include "UniversityMember.h"
#include <iostream>
using namespace std;
#include <string>
// this is my university member class  
// defining the constructor first 
UniversityMember::UniversityMember(string name, int memberId){
    this ->name = name;
    this->memberId= memberId;
    // done initializing the constructor 
}
 UniversityMember::~UniversityMember(){
   
 } 
 // following are my member functions  
  string UniversityMember::getName(){
    return name;
  }
   int UniversityMember::getMemberId(){
    return memberId;
   }
   int UniversityMember::getMemberID(){
    return memberId;
}
   // my this class ends here 