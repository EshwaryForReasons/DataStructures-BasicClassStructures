
#include "Product.h"

Product::Product(string _product_name, string _product_image_path, Price _price, int _num_reviews, string _shipping_date)
{
	product_name = _product_name;
	product_image_path = _product_image_path;
	price = _price;
	num_reviews = _num_reviews;
	shipping_date = _shipping_date;
}

Product::~Product()
{

}

void Product::set_product_name(string new_product_name)
{
	product_name = new_product_name;
}

void Product::set_product_image_path(string new_product_image_path)
{
	product_image_path = new_product_image_path;
}

void Product::set_price(Price new_price)
{
	price = new_price;
}

void Product::set_num_reviews(int new_num_reviews)
{
	num_reviews = new_num_reviews;
}

void Product::set_shipping_date(string new_shipping_date)
{
	shipping_date = new_shipping_date;
}

string Product::get_product_name()
{
	return product_name;
}

string Product::get_product_image_path()
{
	return product_image_path;
}

Price Product::get_price()
{
	return price;
}

int Product::get_num_reviews()
{
	return num_reviews;
}

string Product::get_shipping_date()
{
	return shipping_date;
}
