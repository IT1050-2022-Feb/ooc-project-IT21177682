#include "Report.h"
#include<iostream>
#include<string>
using namespace std; 
Report::Report() // Default constructor
{ 
 ReportID = 0; 
 ReportName = ""; 
} 
Report::Report(int rID, string rName) // Overload Constructor
{ 
 ReportID = rID; 
 strcpy(ReportName, rName)
} 
void Report::generatepaymentReport() // Method
{ 
}
void Report::generateclientReport() // Method
{
}
Report:: ~Report()
{
  
}