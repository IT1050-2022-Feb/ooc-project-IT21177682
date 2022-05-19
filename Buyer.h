#pragma once
//Buyer.h
class Buyer {
	private :
	    int buyerID;
	    string buyerName ;
      string email;
      string password;
      Feedback *fb;
      Message *msg;
      Propert *prty;
      
      
    public :
    	Buyer ();
	    Buyer(int bID, string bName, string buyerEmail, string password);
    void displayBuyerDetails ();
		void visitingDte ();
		void sentmsg ();
		void getmsg ();
		void buyProperty();
    ~Buyer();
	}