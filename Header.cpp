
#include "Header.h"

Header::Header(string _message, TimeAndDate _time_and_date)
{
	message = _message;
	time_and_date = _time_and_date;
}

Header::~Header()
{

}

void Header::set_message(string new_message)
{
	message = new_message;
}

void Header::set_time_and_date(TimeAndDate new_time_and_date)
{
	time_and_date = new_time_and_date;
}

std::string Header::get_message()
{
	return message;
}

TimeAndDate Header::get_time_and_date()
{
	return time_and_date;
}

void Header::display_header()
{
	cout << time_and_date.get_date() << ", " << time_and_date.get_time() << " " << message << endl;
}
