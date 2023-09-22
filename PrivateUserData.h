
#pragma once

#include <iostream>

using namespace std;

/**
	This class represents the private user data
*/
class PrivateUserData
{
public:

	PrivateUserData(uint64_t _credit_card_num, int _security_code);
	~PrivateUserData();

	/**
		Sets the credit_card_num
		@param new_credit_card_num					new_credit_card_num to set
	*/
	void set_credit_card_num(uint64_t new_credit_card_num);
	/**
		Sets the security_code
		@param new_security_code					new_security_code to set
	*/
	void set_security_code(int new_security_code);

	/**
		Gets the credit_card_num
		@return credit_card_num
	*/
	uint64_t get_credit_card_num();
	/**
		Gets the security_code
		@return security_code
	*/
	int get_security_code();

private:

	uint64_t credit_card_num;
	int security_code;
};

