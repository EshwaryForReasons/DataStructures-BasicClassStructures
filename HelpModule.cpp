
#include "HelpModule.h"

HelpModule::HelpModule(Title _title)
{
	set_title(_title);
}

HelpModule::HelpModule(vector<Link> _links)
{
	links = _links;
}

HelpModule::HelpModule(Link _link)
{
	links.push_back(_link);
}

HelpModule::~HelpModule()
{

}

void HelpModule::add_link(Link new_link)
{
	links.push_back(new_link);
}

void HelpModule::clear_links()
{
	links.clear();
}

vector<Link> HelpModule::get_links()
{
	return links;
}

