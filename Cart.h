
#pragma once

#include "Product.h"

#include <vector>

using namespace std;

/**
	This class represents the user's cart
*/
class Cart
{
public:

	Cart() = default;
	~Cart();

	/**
		Sets the products vector
		@param new_products			new_products to set
	*/
	void set_products(vector<Product> new_products);
	/**
		Gets the products vector
		@return products
	*/
	vector<Product> get_products();

	/**
		Adds a product to the products vector
		@param product			product to add
	*/
	void add_product(Product product);
	/**
		Clears the
	*/
	void clear_products();

private:

	//List of all products in this module
	vector<Product> products;
};

