
#pragma once

#include <iostream>

using namespace std;

/**
	This class represents the current time and date
*/
class TimeAndDate
{
public:

	TimeAndDate() = default;
	TimeAndDate(string _time, string _date);
	~TimeAndDate();

	/**
		Sets the time
		@param new_time					new_time to set
	*/
	void set_time(string new_time);
	/**
		Sets the date
		@param new_date					new_date to set
	*/
	void set_date(string new_date);

	/**
		Gets the time
		@return time
	*/
	string get_time();
	/**
		Gets the time
		@return date
	*/
	string get_date();

private:

	string time;
	string date;
};

