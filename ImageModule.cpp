
#include "ImageModule.h"

ImageModule::ImageModule(string _title, string _image_path, string _information)
{
	title = _title;
	image_path = _image_path;
	information = _information;
}

ImageModule::~ImageModule()
{

}

void ImageModule::set_image_path(string new_image_path)
{
	image_path = new_image_path;
}

void ImageModule::set_information(string new_information)
{
	information = new_information;
}

string ImageModule::get_image_path() const
{
	return image_path;
}

string ImageModule::get_information() const
{
	return information;
}
