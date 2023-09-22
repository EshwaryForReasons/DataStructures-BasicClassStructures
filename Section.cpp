
#include "Section.h"

Section::Section(string _title)
{
	title = _title;
}

Section::Section(string _title, vector<Module> _modules)
{
	title = _title;
	modules = _modules;
}

Section::~Section()
{

}

void Section::set_title(string new_title)
{
	title = new_title;
}

void Section::set_modules(vector<Module> new_modules)
{
	modules = new_modules;
}

void Section::add_module(Module new_module)
{
	modules.push_back(new_module);
}

void Section::clear_modules()
{
	modules.clear();
}

string Section::get_title()
{
	return title;
}

vector<Module> Section::get_modules()
{
	return modules;
}

