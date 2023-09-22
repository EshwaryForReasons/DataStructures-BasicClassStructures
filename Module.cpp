
#include "Module.h"

Module::Module(Title _title)
{
	title = _title;
}

Module::~Module()
{

}

void Module::set_title(Title new_title)
{
	title = new_title;
}

Title Module::get_title() const
{
	return title;
}
