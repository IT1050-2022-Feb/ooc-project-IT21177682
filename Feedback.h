
class Feedback
{
private:
    int feedbackID;
    string name;
    string email;
    string feedbackMsg;
 
public:
    void feedback(int fbID, string buyerName, string buyerEmail, string addFeedback);
    void displayFeedback();
  ~Feedback();
};



