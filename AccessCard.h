#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <iostream>
#include <string>
using namespace std;
// this is the access card class 
class AccessCard{
string cardID;
int accessLevel;
public:
// constructor 
AccessCard(string cardID, int accessLevel);
// getters 
string getCardID();
int getAccessLevel();
void displayCardInfo();
};
#endif
// this class ends here 