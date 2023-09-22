
#pragma once

#include <iostream>

using namespace std;

class Title
{
public:

	Title() = default;
	Title(string _title, int _font_size);
	~Title();

	void set_title(string new_title);
	void set_font_size(int new_font_size);

	string get_title();
	int get_font_size();

private:

	string title;
	int font_size;
};

