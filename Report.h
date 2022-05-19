#pragma once
class Report 
{ 
private :
   int ReportID; 
   string ReportName; 

public : 
   Report(); 
   Report(int rID, string rName);  
   void generatepaymentReport(); 
   void generateclientReport();
   
}; 
