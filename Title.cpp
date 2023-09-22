
#include "Title.h"

Title::Title(string _title, int _font_size)
{
	title = _title;
	font_size = _font_size;
}

Title::~Title()
{

}

void Title::set_title(string new_title)
{
	title = new_title;
}

void Title::set_font_size(int new_font_size)
{
	font_size = new_font_size;
}

string Title::get_title()
{
	return title;
}

int Title::get_font_size()
{
	return font_size;
}
