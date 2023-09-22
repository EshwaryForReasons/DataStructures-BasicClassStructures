
#pragma once

#include "Link.h"

#include <iostream>

using namespace std;

/**
	This class represents the section meant to how products of certain categories
*/
class ProductSection
{
public:

	ProductSection(string _section_name, Link _section_url);
	~ProductSection();

	/**
		Sets the section_name
		@param new_section_name					new_products to set
	*/
	void set_section_name(string new_section_name);
	/**
		Sets the section_url
		@param new_section_url					new_section_url to set
	*/
	void set_section_url(Link new_section_url);

	/**
		Gets the section_name
		@return section_name
	*/
	string getsection_name();
	/**
		Gets the section_name
		@return section_url
	*/
	Link getsection_url();

private:

	string section_name;
	Link section_url;
};

