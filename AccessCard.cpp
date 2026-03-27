#include "AccessCard.h"
#include <iostream>
using namespace std;
// this is my access card class 
// first I will define my constructor 
AccessCard::AccessCard(string cardID, int accessLevel){
 this-> cardID = cardID;
    this->accessLevel= accessLevel;
}
// done initializing the constructor 
// following are my getters 
string AccessCard::getCardID(){
    return cardID;
}
int AccessCard::getAccessLevel(){
    return accessLevel;
}
// member function below 
void AccessCard::displayCardInfo(){
    cout<<"The card ID is "<<cardID<<""<<"The access level is "<<accessLevel<<endl;

}
// this class class ends here 