//Main .cpp

#include "Property.h"
#include "Contractor.h"
#include "Admin.h"
#include "Seller.h"
#include "Payment.h"
#include "Buyer.h"
#include "Report.h"
#include "visiting.h"
#include "Feedback.h"
#include "Message.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    

  Feedback fb(1010,"Amal", "amal33@gmail.com","Great service"); //object creat
  fb.displayFeedback();


  Buyer *buyer = new Buyer(3303, "Tom" , "Tom33@gmail.com","To2244"); 
  buyer->displayBuyerDetails(); //call methods
  buyer->sentmsg();
  buyer->getmsg();
  buyer->buyProperty();

  Seller *seller = new Seller(4403, "Sam" , "SAm55@gmail.com","cvf5566"); 
  seller->displaySellerDetails();
  seller->sentmsg();
  seller->getmsg();
  seller->addProperty();
  seller->makePayment();
  

  Contractor *contractor = new Contractor(5503, "Luna,"Lun77@gmail.com","xse334"); 
  contractor->displayContractorDetails();
  contractor->sentmsg();
  contractor->getmsg();
  contractor->addAdvertisement();

  
 Property prty(1001, "Land", "Malabe", 2000000); 
 prty.displayPropertyDetails();
 prty.addProperty();
 prty.removeProperty();
 prty.updateProperty();
  
 Admin adm1(2202, "Azam" , "Azam22@gmail.com" , "Zee@123"); 
 adm1.updateTourSchedule();
 adm1.addProperty();
 adm1.removeProperty();
  
 Payment pay1(002,"BankDeposit"); 
 pay1.displayPaymentDetails();
  
 Report *RPT;
 RPT->generatepaymentReport();
 RPT->generateclientReport();
  
 visiting vst(100, "Gampaha","2022/02/22"); 
 vst.displayvisitingDetals();
  
 Message msg(111, "text", "please call me"); 
 msg.DisplaymessageDetail();
 

  //----Delete Dynamic objects------
  
  delete seller;
  delet buyer;
  delet contractor;
  delet msg;
  delet prty;
  delete RPT;
  
 
  
    return 0;
}
