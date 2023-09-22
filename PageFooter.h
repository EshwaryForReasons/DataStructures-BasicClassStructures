
#pragma once

#include <iostream>

using namespace std;

/**
	This class represents the footer at the bottom of every page
*/
class PageFooter
{
public:

	PageFooter(string _url, int _page, int _max_page);
	~PageFooter();

	/**
		Sets the url
		@param new_url					new_url to set
	*/
	void set_url(string new_url);
	/**
		Sets the page
		@param new_page					new_page to set
	*/
	void set_page(int new_page);
	/**
		Sets the max page
		@param new_max_page				new_max_page to set
	*/
	void set_max_page(int new_max_page);

	/**
		Gets the url
		@return url
	*/
	string get_url();
	/**
		Gets the page
		@return page
	*/
	int get_page();
	/**
		Gets the max page
		@return max_page
	*/
	int get_max_page();

	/**
		Prints the footer to the console
	*/
	void display_footer();

private:

	//Url to show on footer
	string url;
	//Page number of the current page
	int page;
	//Number of pages
	int max_page;
};

