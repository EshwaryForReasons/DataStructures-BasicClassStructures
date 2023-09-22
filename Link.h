
#pragma once

#include <iostream>

using namespace std;

/**
	This class represents a single link
*/
class Link
{
public:
	
	Link() = default;
	Link(string _link, string _display_text);
	~Link();

	/**
		Sets the link
		@param new_link					new_link to set
	*/
	void set_link(string new_link);
	/**
		Sets the display text
		@param new_display_text			new_display_text to set
	*/
	void set_display_text(string new_display_text);

	/**
		Gets the link
		@return link
	*/
	string get_link();
	/**
		Gets the display text
		@return display_text
	*/
	string get_display_text();

private:

	//The actual link
	string link;
	//Text to display in place of the link
	string display_text;
};

