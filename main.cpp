/******************************
* 
* Program Name: Lab 1 Amazon Page
* Author: Eshwary Mishra
* Date: 14 September 2023
* Description: This program uses 20 classes to create the Amazon page provided
* 
*******************************/
#include "Account.h"
#include "Button.h"
#include "Cart.h"
#include "FinalFooter.h"
#include "Header.h"
#include "HelpModule.h"
#include "ImageModule.h"
#include "Link.h"
#include "Module.h"
#include "OrderHistory.h"
#include "PageFooter.h"
#include "Payments.h"
#include "Price.h"
#include "PrivateUserData.h"
#include "Product.h"
#include "ProductModule.h"
#include "ProductSection.h"
#include "Section.h"
#include "TimeAndDate.h"
#include "Title.h"

int main()
{
	//Creating for the sake of the assignment, these are supposed to be more of a base class for the other classes
	Title module_title("Test Module", 32);
	Module module(module_title);

	Section section("Section");

	//Account
	Account account("eshwary", "eshwary@gmail.com", "password", "My Address");
	PrivateUserData private_user_data(40984939294857472, 1010);

	TimeAndDate time_and_date("6:42", "14 September 2023");
	Header("Your Account", time_and_date);

	Cart cart;
	OrderHistory order_history(cart);
	Payments payments(10);

	//Your Account Section
	Section your_account_section("Your Account");

	ImageModule your_orders_module("Your Orders", "image_path", "Track, return, cancel an order, download invoice or buy again.");
	your_account_section.add_module(your_orders_module);

	//Help Section
	Title help_module_title("Help Module", 32);
	HelpModule help_module(help_module_title);
	Link link_1("link to your addresses", "Your Addresses");
	help_module.add_link(link_1);

	//Product 
	Link product_section_link("link to product of a certain section", "All");
	ProductSection product_section("All", product_section_link);

	Title product_module_title("Products", 32);
	ProductModule product_module(product_module_title);

	Price product_1_price(50.0f, 45.0f, true);
	Product product_1("Very Nice Stick", "Image of Nice Stick", product_1_price, 998, "14 September 2023");
	product_module.add_product(product_1);

	PageFooter page_1_footer("url to some site", 1, 4);
	PageFooter page_2_footer("url to some site", 2, 4);
	PageFooter page_3_footer("url to some site", 3, 4);
	PageFooter page_4_footer("url to some site", 4, 4);

	Button english_button("English", "link to english", 50, 10);
	Button united_states_button("United States", "link to united states", 50, 10);

	vector<string> messages;
	messages.push_back("Conditions of Use");
	messages.push_back("Privacy Notice");
	FinalFooter final_footer(messages);

	return 0;
}