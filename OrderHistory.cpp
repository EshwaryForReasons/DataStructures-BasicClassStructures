
#include "OrderHistory.h"

OrderHistory::OrderHistory(Cart _previous_cart)
{
	previous_carts.push_back(_previous_cart);
}

OrderHistory::OrderHistory(vector<Cart> _previous_carts)
{
	previous_carts = _previous_carts;
}

OrderHistory::~OrderHistory()
{

}

void OrderHistory::set_previous_carts(vector<Cart> new_previous_carts)
{
	previous_carts = new_previous_carts;
}

vector<Cart> OrderHistory::get_previous_carts()
{
	return previous_carts;
}

void OrderHistory::add_order_to_history(Cart order)
{
	previous_carts.push_back(order);
}
