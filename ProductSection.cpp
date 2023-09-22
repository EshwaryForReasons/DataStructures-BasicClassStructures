
#include "ProductSection.h"

ProductSection::ProductSection(string _section_name, Link _section_url)
{
	section_name = _section_name;
	section_url = _section_url;
}

ProductSection::~ProductSection()
{

}

void ProductSection::set_section_name(string new_section_name)
{
	section_name = new_section_name;
}

void ProductSection::set_section_url(Link new_section_url)
{
	section_url = new_section_url;
}

string ProductSection::getsection_name()
{
	return section_name;
}

Link ProductSection::getsection_url()
{
	return section_url;
}
