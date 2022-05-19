#pragma once
class Message
{
private:
	int messageID;
	string messageType;
	string messageContents;
public:
	Message();
	Message(int mID, string mType, string mContents);
	void displayMessageDetails();
	~Message();
};