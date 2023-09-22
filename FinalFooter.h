
#pragma once

#include <iostream>
#include <vector>

using namespace std;

/**
	This class represents the final footer, including the privacy policy, etc.
*/
class FinalFooter
{
public:

	FinalFooter(vector<string> _messages);
	~FinalFooter();

	/**
		Sets the messages vector
		@param new_messages			new_messages to set
	*/
	void set_messages(vector<string> new_messages);
	/**
		Gets the messages vector
		@return messages
	*/
	vector<string> get_messages();

	/**
		Adds a message to the messages vector
		@param new_message			new_message to add
	*/
	void add_message(string new_message);

private:

	//List of all messages in the footer
	vector<string> messages;
};

