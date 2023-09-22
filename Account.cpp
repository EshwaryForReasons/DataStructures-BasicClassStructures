
#include "Account.h"

Account::Account(string _user_name, string _email, string _password, string _shipping_address)
{
	user_name = _user_name;
	email = _email;
	password = _password;
	shipping_address = _shipping_address;
}

Account::~Account()
{

}

void Account::set_user_name(string new_user_name)
{
	user_name = new_user_name;
}

void Account::set_email(string new_email)
{
	email = new_email;
}

void Account::set_password(string new_password)
{
	password = new_password;
}

void Account::set_shipping_address(string new_shipping_address)
{
	shipping_address = new_shipping_address;
}

string Account::get_user_name()
{
	return user_name;
}

string Account::get_email()
{
	return email;
}

string Account::get_password()
{
	return password;
}

string Account::get_shipping_address()
{
	return shipping_address;
}
