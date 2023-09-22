
#pragma once

#include "TimeAndDate.h"

#include <iostream>

using namespace std;

/**
	This class represents the header with the title, time, and date
*/
class Header
{
public:

	Header(string _message, TimeAndDate _time_and_date);
	~Header();

	/**
		Sets the message
		@param new_message			new_message to set
	*/
	void set_message(string new_message);
	/**
		Sets the time and date
		@param new_time_and_date	new_time_and_date to set
	*/
	void set_time_and_date(TimeAndDate new_time_and_date);

	/**
		Gets the message
		@return new_message
	*/
	string get_message();
	/**
		Gets the time and date
		@return get_time_and_date
	*/
	TimeAndDate get_time_and_date();

	/**
		Prints the header to the console
	*/
	void display_header();

private:
	
	//Message displayed in the header
	string message;
	//Current time and date
	TimeAndDate time_and_date;
};

