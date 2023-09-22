
#include "Link.h"

Link::Link(string _link, string _display_text)
{
	link = _link;
	_display_text = display_text;
}

Link::~Link()
{

}

void Link::set_link(string new_link)
{
	link = new_link;
}

void Link::set_display_text(string new_display_text)
{
	display_text = new_display_text;
}

string Link::get_link()
{
	return link;
}

string Link::get_display_text()
{
	return display_text;
}
