
#pragma once

/**
	This class represents the price of a product
*/
class Price
{
public:

	Price() = default;
	Price(float _original_price, float _discounted_price, bool _b_is_discounted);
	~Price();

	/**
		Sets the original_price
		@param new_original_price					new_original_price to set
	*/
	void set_original_price(float new_original_price);
	/**
		Sets the discounted_price
		@param new_discounted_price					new_discounted_price to set
	*/
	void set_discounted_price(float new_discounted_price);
	/**
		Sets the b_is_discounted
		@param new_is_discounted					new_is_discounted to set
	*/
	void set_is_discounted(bool new_is_discounted);

	/**
		Gets the original_price
		@return original_price
	*/
	float get_original_price();
	/**
		Gets the discounted_price
		@return discounted_price
	*/
	float get_discounted_price();
	/**
		Gets the b_is_discounted
		@return b_is_discounted
	*/
	bool get_is_discounted();

	/**
		Displays the orignial price if there is no discount, discounted price otherwise
	*/
	void display_price();

private:

	float original_price;
	float discounted_price;
	bool b_is_discounted;
};

