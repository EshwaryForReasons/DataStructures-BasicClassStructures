
#pragma once

#include "Module.h"
#include "Link.h"

#include <vector>

/**
	This class is the massive list of links including help information
*/
class HelpModule : public Module
{
public:

	HelpModule(Title _title);
	HelpModule(vector<Link> _links);
	HelpModule(Link _link);
	~HelpModule();

	/**
		Adds a link to the module
		@param new_link				new_link to add
	*/
	void add_link(Link new_link);
	/**
		Clears all links from the module
	*/
	void clear_links();

	/**
		Gets the links vector
		@return links
	*/
	vector<Link> get_links();

private:

	//List of all links in this module
	vector<Link> links;
};

