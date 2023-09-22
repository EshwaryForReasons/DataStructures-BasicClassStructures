
#pragma once

#include "Title.h"

#include <iostream>

using namespace std;

/**
	This class represents the base module
*/
class Module
{
public:

	Module() = default;
	Module(Title _title);
	~Module();

	/**
		Sets the title
		@param new_title					new_title to set
	*/
	void set_title(Title new_title);
	/**
		Gets the title
		@return title
	*/
	Title get_title() const;

private:

	Title title;
};

