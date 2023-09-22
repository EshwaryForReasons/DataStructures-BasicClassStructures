
#pragma once

#include "Module.h"

/**
	This class is each individual button with an image in it
*/
class ImageModule : public Module
{
public:

	ImageModule(string _title, string _image_path, string _information);
	~ImageModule();

	/**
		Sets the image path
		@param new_image_path			new_image_path to set
	*/
	void set_image_path(string new_image_path);
	/**
		Sets the information
		@param new_information			new_information to set
	*/
	void set_information(string new_information);
	/**
		Gets the message
		@return image_path
	*/
	string get_image_path() const;
	/**
		Gets the message
		@return information
	*/
	string get_information() const;

private:

	//Title of the module
	string title;
	//Path to the image displayed
	string image_path;
	//Information of the module
	string information;
};

