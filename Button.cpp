
#include "Button.h"

Button::Button(string _text, string _link, int _width, int _height)
{
	text = _text;
	link = _link;
	width = _width;
	height = _height;
}

Button::~Button()
{

}

void Button::set_text(string new_text)
{
	text = new_text;
}

void Button::set_link(string new_link)
{
	link = new_link;
}

void Button::set_width(int new_width)
{
	width = new_width;
}

void Button::set_height(int new_height)
{
	height = new_height;
}

string Button::get_text()
{
	return text;
}

string Button::get_link()
{
	return link;
}

int Button::get_width()
{
	return width;
}

int Button::get_height()
{
	return height;
}
