
#include "Price.h"

#include <iostream>

using namespace std;

Price::Price(float _original_price, float _discounted_price, bool _b_is_discounted)
{
	original_price = _original_price;
	discounted_price = _discounted_price;
	b_is_discounted = _b_is_discounted;
}

Price::~Price()
{

}

void Price::set_original_price(float new_original_price)
{
	original_price = new_original_price;
}

void Price::set_discounted_price(float new_discounted_price)
{
	discounted_price = new_discounted_price;
}

void Price::set_is_discounted(bool new_is_discounted)
{
	b_is_discounted = new_is_discounted;
}

float Price::get_original_price()
{
	return original_price;
}

float Price::get_discounted_price()
{
	return discounted_price;
}

bool Price::get_is_discounted()
{
	return b_is_discounted;
}

void Price::display_price()
{
	cout << "$" << (b_is_discounted ? discounted_price : original_price) << endl;
}
