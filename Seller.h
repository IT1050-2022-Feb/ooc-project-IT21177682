#include "Message.h"
#include "Property.h"
#include "visiting.h"
#define SIZE 1


  class Seller{
private:
 
  int sellerID;
  string sellerName;
  string  email;
  string  password; 

  Message *msg;
  Property *prt;



public:

Seller()
Seller(intsellerID,stringsellerName,stringemail,string password);
 void displaySellerDetails();
 void addProperty();   
 void makePayment();
 void sentmsg();
 void getmsg();
 ~Seller(); 

   } ; 