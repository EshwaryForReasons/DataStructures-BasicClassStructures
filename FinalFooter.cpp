
#include "FinalFooter.h"

FinalFooter::FinalFooter(vector<string> _messages)
{
	messages = _messages;
}

FinalFooter::~FinalFooter()
{

}

void FinalFooter::set_messages(vector<string> new_messages)
{
	messages = new_messages;
}

vector<string> FinalFooter::get_messages()
{
	return messages;
}

void FinalFooter::add_message(string new_message)
{
	messages.push_back(new_message);
}
