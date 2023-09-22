
#pragma once

#include "Module.h"
#include "Price.h"

#include <vector>

class Product
{
public:

	Product() = default;
	Product(string _product_name, string _product_image_path, Price _price, int _num_reviews, string _shipping_date);
	~Product();

	void set_product_name(string new_product_name);
	void set_product_image_path(string new_product_image_path);
	void set_price(Price new_price);
	void set_num_reviews(int new_num_reviews);
	void set_shipping_date(string new_shipping_date);

	string get_product_name();
	string get_product_image_path();
	Price get_price();
	int get_num_reviews();
	string get_shipping_date();

private:

	string product_name;
	string product_image_path;
	Price price;
	int num_reviews;
	string shipping_date;
};

