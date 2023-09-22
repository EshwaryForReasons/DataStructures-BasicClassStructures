
#include "Cart.h"

Cart::~Cart()
{

}

void Cart::set_products(vector<Product> new_products)
{
	products = new_products;
}

vector<Product> Cart::get_products()
{
	return products;
}

void Cart::add_product(Product product)
{
	products.push_back(product);
}

void Cart::clear_products()
{
	products.clear();
}
