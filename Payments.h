
#pragma once

#include <iostream>

/**
	This class represents how much the user has payed and needs to pay
*/
class Payments
{
public:

	Payments(int amount_remaining);
	~Payments();

	/**
		Sets the amount_payed
		@param new_amount_payed					new_amount_payed to set
	*/
	void set_amount_payed(int new_amount_payed);
	/**
		Sets the amount_remaining
		@param new_amount_remaining				new_amount_remaining to set
	*/
	void set_amount_remaining(int new_amount_remaining);

	/**
		Gets the amount_payed
		@return amount_payed
	*/
	int get_amount_payed();
	/**
		Gets the amount_remaining
		@return amount_remaining
	*/
	int get_amount_remaining();

private:

	int amount_payed;
	int amount_remaining;
};

