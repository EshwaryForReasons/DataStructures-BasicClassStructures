
#pragma once

#include <iostream>

using namespace std;

/**
	This class keeps track of the user currently signed in.
*/
class Account
{
public:

	Account(string _user_name, string _email, string _password, string _shipping_address);
	~Account();

	/**
		Sets the username
		@param new_user_name			new user name to set
	*/
	void set_user_name(string new_user_name);
	/**
		Sets is email
		@param new_email				new email to set
	*/
	void set_email(string new_email);
	/**
		Sets is password
		@param new_password				new password to set
	*/
	void set_password(string new_password);
	/**
		Sets is shipping address
		@param new_shipping_address		new shipping address to set
	*/
	void set_shipping_address(string new_shipping_address);

	/**
		Gets the username
		@return user_name
	*/
	string get_user_name();
	/**
		Gets the email
		@return email
	*/
	string get_email();
	/**
		Gets the password
		@return password
	*/
	string get_password();
	/**
		Gets the shippping address
		@return shippping_address
	*/
	string get_shipping_address();

private:

	string user_name;
	string email;
	string password;
	string shipping_address;
};

