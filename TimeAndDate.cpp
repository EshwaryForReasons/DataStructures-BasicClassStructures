
#include "TimeAndDate.h"

TimeAndDate::TimeAndDate(string _time, string _date)
{
	time = _time;
	date = _date;
}

TimeAndDate::~TimeAndDate()
{

}

void TimeAndDate::set_time(string new_time)
{
	time = new_time;
}

void TimeAndDate::set_date(string new_date)
{
	date = new_date;
}

string TimeAndDate::get_time()
{
	return time;
}

string TimeAndDate::get_date()
{
	return date;
}
