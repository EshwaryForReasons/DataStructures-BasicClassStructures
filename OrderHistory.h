
#pragma once

#include "Cart.h"

/**
	This class represents user's order history
*/
class OrderHistory
{
public:

	OrderHistory(Cart _previous_cart);
	OrderHistory(vector<Cart> _previous_carts);
	~OrderHistory();

	/**
		Sets the previous carts vector
		@param new_previous_carts					new_previous_carts to set
	*/
	void set_previous_carts(vector<Cart> new_previous_carts);
	/**
		Gets the previous carts vector
		@return previous_carts
	*/
	vector<Cart> get_previous_carts();

	/**
		Add a cart the previous carts vector
		@param order					order to add
	*/
	void add_order_to_history(Cart order);

private:

	//List of previous carts
	vector<Cart> previous_carts;
};

