#pragma once
#Define SIZE 2
class Payment // Payment Class
{ 
private : // Attributies 
   int paymentID; 
   int paymentType;
  Property *prt[SIZE];
 
public : // Methods
   Payment(); 
   Payment(int pID, int pType); 
   void calculatePayment(); 
   void displayPaymentDetails(); 
   ~Payment();
};