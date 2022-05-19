#pragma once
//Uni-directional association between Contractor Class and the Message Class
// association between Contractor Class and the Property Class
class Contractor
{
private:
	int contractorID;
	string contractorName;
	string contractorEMail;
	string contractorPassword;
	Message* msg; // An object of Message as attribute
	Property*prty; // An object  of property as Attribute
public:
	Contractor();
	Contractor(int cID, string cName, string cEMail, string cPassword);
	void displayContractorDetails();
	void addAdvertisement();
  void sentmsg;
  void getmsg;
	void makePayments();
	~Contractor();
};

