//Admin.cpp
#include "Admin.h"
#include "Report.h"
#include"Property.h"
#include<iostream>
#include<string>
#include<stdio.h>
#define SIZE 
using namespace std; 
Admin::Admin() // Default constructor
{ 
 
} 
Admin::Admin(int aID, string aName,string aemail,string apassword, Report *R, Property *Prty) // Overload constructor
{ 
 adminID = aID; 
 adminName = aName; 
 email = aemail;
 password = apassword;
 RPT = R; 
 PRT = prty;
} 
void Admin::validatepayment() {
  
}

void Admin::addadvertisment() 
{ 
} 
void Admin::removeadvertisment() 
{ 
} 
Admin::~Admin() 
{ 
}