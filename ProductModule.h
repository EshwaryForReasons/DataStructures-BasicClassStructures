
#pragma once

#include "Module.h"
#include "Product.h"

#include <vector>

class ProductModule : public Module
{
public:

	ProductModule(Title _title);
	ProductModule(vector<Product> _product);
	ProductModule(string _product_name, string _product_image_path, Price _price, int _num_reviews, string _shipping_date);
	~ProductModule();

	/**
		Sets the products vector
		@param new_products					new_products to set
	*/
	void set_product(vector<Product> new_products);
	/**
		Gets the products
		@return products
	*/
	vector<Product> get_products();

	/**
		Adds a product to the products vector
		@param new_product					new_product to add
	*/
	void add_product(Product new_product);

private:

	vector<Product> products;
};

