#include "Seller.h"
#include "Buyer.h"
#define SIZE 2

class visiting
{
private:
 
  int visitingID;
  string Location;
  string  visitigdate;
  Seller *sell[SIZE];
  Buyer *buyer[SIze];
  Contractor *contractor[SIze];
  

public:

  visiting()
  visiting(int visitingID,string Location,string visitingdate);
  Void displayvisitingDetails();
  ~visiting();

    };
  