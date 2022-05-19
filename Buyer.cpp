//Buyer.cpp
#include <iostream>
#include<cstring>
#include "Buyer.h"
#include "Feedback.h"
#include "Message.h"
#include "visiting.h"

using namespace std;
Buyer::Buyer(int bID[], string bName[], string buyerEmail[], string password[]);
{
	strcpy (buyerID, bID)
	strcpy (buyerName, bName);
    strcpy (email, buyerEmail);
    strcpy (Password, password);
}
void Buyer::displayDetails()
{
 cout << "BuyerID :" << buyerID <<endl;
 cout << "BuyerName :" << buyerName <<endl;
 cout << "Email :" << email <<endl;
 cout << "Password :" << password <<endl;
}
void Buyer::sentBuyer(){
}
void Buyer::getmsg(){
}
void Buyer::buyProperty(){
}
void Buyer::ReserveDate(){
}
 Buyer:: ~Buyer(){
}