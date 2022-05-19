#include "Feedback.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign Buyer Details and Feedback Message

void Feedback::feedback(int fbID, string BuyerName[], string BuyerEmail[], string addFeedback[]);
{
    int feedbackNo = fbID;
    strcpy(name, BuyerName);
    strcpy(email, BuyerEmail);
    strcpy(feedbackMsg, addFeedback);
}

// Display User Details and Feedback Message

void Feedback::displayFeedback() {
 cout << "Feedback ID : " << feedbackID << endl;
 cout << "Buyer Name : " << name << endl;
 cout << "Email : " << email << endl;
 cout << "Feedback : " << feedbackMsg << endl;
}

