#include "Payment.h"
#include<iostream>
#include<string>
using namespace std; 
Payment::Payment() // Default constructor
{ 
 paymentID = 0; 
 paymenttype = 0; 
} 
Payment::Payment(int pID, string ptype) // Overload constructor
{ 
 paymentID = pID; 
 paymenttype = ptype; 
} 
void Payment::calculatePayment() // Method
{ 
} 
void Payment :: displayPaymentDetails() // Method
{ 
 
} 
~Payment::Payment()
{
  
}