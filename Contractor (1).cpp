#include "Contractor.h"
#include "Message.h"
#include "Property.h"
#include <iostream>
#include <cstring>
using namespace std;

Contractor::Contractor() {
}
Contractor::Contractor(int cID, string cName, string cEMail, string cPassword propert *p, Message *mg) {
	contractorID = cID;
	contractorName = cName;
	contractorEMail = cEMail;
	contractorPassword = cPassword;
  prty = p;
  msg =mg;
}
void Contractor::displayContractorDetails() 
{

}
void Contractor::addAdvertisement()
{

}
void Contractor::makePayments() 
{

}
void Contractor::sentmsg() 
{

}
void Contractor::getmsg() 
{

}
Contractor::~Contractor() 
{

}
