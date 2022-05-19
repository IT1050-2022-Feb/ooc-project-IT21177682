#pragma once
#define SIZE 1
class Property
{
private:
	int propertyID; 
	string propertyType;
	string location;
	double price;

	Payment* pay1[SIZE1];
	int payID;
  Seller* seller;
  Buyer* buyer;
  Admin* admin;
  Constractor* constractor;

public:
	Property();
	Property( int pID, string pType,string pLoc, double pPrice);
	Property(int payID, int pID);
	void displayPropertyDetails();
	void addProperty();
	void removeProperty();
	void updateProperty();
	~Property();

};

