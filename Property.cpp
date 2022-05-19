#include "Property.h"
#include "Payment.h"
#include "Seller.h"
#include "Buyerr.h"
#include "Contractor.h"
#include "Admin.h"
#include <iostream>
#include <cstring>
using namespace std;

Property::Property() {

}
Property::Property(int pID, string pType, string pLoc, double pPrice) 
{
	
	propertyID = pID;
	propertyType = pType;
	location = pLoc;
	price = pPrice;

	//Call the constructor "Payment"
	pay1 = new Payment(payID, pID); //payID=paymentID & pID=propertyID
}
void Property::displayPropertyDetails() 
{

}
void Property::addProperty()
{

}
void Property::removeProperty() 
{

}
void Property::UpdateProperty()
{

}
Property::~Property()
{

}
