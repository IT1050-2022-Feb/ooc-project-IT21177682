#include "Message.h"
#include <cstring>

Message::Message() {
}
Message::Message(int mID, string mType, string mContents) {
	messageID = mID;
	messageType = mType;
	messageContents = mContents;
}
void Message::displayMessageDetails() 
{
  
}
Message::~Message() 
{
  
}