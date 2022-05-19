#include "visiting.h"
#include "seller.h"
#include "Buyer.h"
#include <iostream>
#include <cstring> 

visiting :: visiting()
{ 
  strcpy (visitingID, "");
  strcpy(Location, "");
  strcpy(visitingDate, "");
}
visiting::visiting(int pVisitingID,string pLocation, string pDate, , int res1, int res2) //reserve
{
strcpy(visitingID, pVisitingID);
strcpy(Location, pLocation);
strcpy(Date, pDate);

}

void visitin::displayvisitingDetals()
{
}

visiting::~visiting()
{
  
}