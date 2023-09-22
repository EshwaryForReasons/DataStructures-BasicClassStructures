
#include "ProductModule.h"

ProductModule::ProductModule(Title _title)
{
	set_title(_title);
}

ProductModule::ProductModule(vector<Product> _product)
{
	products = _product;
}

ProductModule::ProductModule(string _product_name, string _product_image_path, Price _price, int _num_reviews, string _shipping_date)
{
	products.push_back(Product(_product_name, _product_image_path, _price, _num_reviews, _shipping_date));
}

ProductModule::~ProductModule()
{

}

void ProductModule::set_product(vector<Product> new_products)
{
	products = new_products;
}

vector<Product> ProductModule::get_products()
{
	return products;
}

void ProductModule::add_product(Product new_product)
{
	products.push_back(new_product);
}
