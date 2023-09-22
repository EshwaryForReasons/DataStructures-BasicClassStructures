
#include "PageFooter.h"

PageFooter::PageFooter(string _url, int _page, int _max_page)
{
	url = _url;
	page = _page;
	max_page = _max_page;
}

PageFooter::~PageFooter()
{

}

void PageFooter::set_url(string new_url)
{
	url = new_url;
}

void PageFooter::set_page(int new_page)
{
	page = new_page;
}

void PageFooter::set_max_page(int new_max_page)
{
	max_page = new_max_page;
}

string PageFooter::get_url()
{
	return url;
}

int PageFooter::get_page()
{
	return page;
}

int PageFooter::get_max_page()
{
	return max_page;
}

void PageFooter::display_footer()
{
	cout << url << " " << page << "/" << max_page << endl;
}
