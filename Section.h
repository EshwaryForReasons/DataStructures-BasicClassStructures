
#pragma once

#include "Module.h"

#include <iostream>
#include <vector>

using namespace std;

/**
	This class represents a base section from which the others are derived
*/
class Section
{
public:

	Section(string _title);
	Section(string _title, vector<Module> _modules);
	~Section();

	/**
		Sets the title
		@param new_title					new_title to set
	*/
	void set_title(string new_title);
	/**
		Sets the modules vector
		@param new_modules					new_modules to set
	*/
	void set_modules(vector<Module> new_modules);

	/**
		Adds a module to the title
		@param new_module					new_module to add
	*/
	void add_module(Module new_module);
	/**
		Clears the modules vector
	*/
	void clear_modules();

	/**
		Gets the title
		@return title
	*/
	string get_title();
	/**
		Gets the modules vector
		@return modules
	*/
	vector<Module> get_modules();

private:

	string title;
	vector<Module> modules;
};

