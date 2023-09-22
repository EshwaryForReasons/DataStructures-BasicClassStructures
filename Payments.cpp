
#include "Payments.h"

Payments::Payments(int _amount_remaining)
{
	amount_payed = 0;
	amount_remaining = _amount_remaining;
}

Payments::~Payments()
{

}

void Payments::set_amount_payed(int new_amount_payed)
{
	amount_payed = new_amount_payed;
}

void Payments::set_amount_remaining(int new_amount_remaining)
{
	amount_remaining = new_amount_remaining;
}

int Payments::get_amount_payed()
{
	return amount_payed;
}

int Payments::get_amount_remaining()
{
	return amount_remaining;
}
