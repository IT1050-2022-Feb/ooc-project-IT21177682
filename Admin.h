
//Admin.h
class Admin // Admin class
{ 
private : // Attributies
    int adminID; 
    string adminName; 
    string email;
    string password;
    Report *RPT;
    Property *PRT;//An object of Report as attribute
public : // Methods
    Admin(); 
    Admin(int aID, string aName,string aemail, string apassword ,Report *RPT, Property *PRT);
 Admin(int aID, string aName,string aemail, string apassword);
    void validatepayments(); 
    void addadvertisment(); 
    void removeadvertisment(); 
    ~Admin(); 
};