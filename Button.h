
#pragma once

#include <iostream>

using namespace std;

/**
	This class represents the clickable buttons
*/
class Button
{
public:

	Button(string _text, string _link, int _width, int _height);
	~Button();

	/**
		Sets the text to new_text
		@param new_text				new text to set
	*/
	void set_text(string new_text);
	/**
		Sets the text to new_link
		@param new_link				new link to set
	*/
	void set_link(string new_link);
	/**
		Sets the text to new_text
		@param new_width			new width to set
	*/
	void set_width(int new_width);
	/**
		Sets the text to new_height
		@param new_height			new height to set
	*/
	void set_height(int new_height);

	/**
		Gets the text
		@return text
	*/
	string get_text();
	/**
		Gets the link
		@return link
	*/
	string get_link();
	/**
		Gets the width
		@return width
	*/
	int get_width();
	/**
		Gets the height
		@return height
	*/
	int get_height();

private:

	string text;
	string link;
	int width;
	int height;
};

