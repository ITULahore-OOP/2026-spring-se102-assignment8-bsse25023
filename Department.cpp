#include "Department.h"
#include <iostream>
using namespace std;
// first of all I will initialie my constructor 
Department::Department(string departmentName){
this->departmentName=departmentName;
memberCount=0; // initializing the count 
}
void Department::addMember(UniversityMember* member){
    members[memberCount] = member;  
    memberCount = memberCount + 1;       // updating the count // count increases 
}
// following is my display function 
void Department::displayAllRoles(){
 for (int i=0; i <memberCount;i++) {
        members[i]->displayRole();
}
}
// my this class ends here 