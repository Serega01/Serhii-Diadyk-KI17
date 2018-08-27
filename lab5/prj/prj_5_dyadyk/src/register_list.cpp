#include "register_list.h"

#include <iostream>
#include <algorithm>
#include <exception>
#include <cmath>

std::size_t RegisterList::size()
{
	return _size;
}

const std::vector<RegisterList::Data> &RegisterList::_data_list() const
{
	return data_list;
}

bool RegisterList::is_empty()
{
	return _size == 0 ? true : false;
}

void RegisterList::search_by_series(const std::string& series)
{
	try
	{
		if (is_empty())
			throw std::out_of_range("Error: List is empty");

		bool found = 0;
		for (const auto &i : data_list)
		{
			if (i._series == series)
			{
				print(i);
				found++;
			}
		}

		if (found < 1)
			throw std::out_of_range("Error: Series is incorrect");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void RegisterList::search_by_name(const std::string& name)
{
	try
	{
		if (is_empty())
			throw std::out_of_range("Error: List is empty");

		bool found = 0;
		for (const auto &i : data_list)
		{
			if (i._name == name)
			{
				print(i);
				found++;
			}
		}

		if (found < 1)
			throw std::out_of_range("Error: Name is incorrect");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void RegisterList::print()
{
	try
	{
		if (is_empty())
			throw std::out_of_range("Error: List is empty");

		for (const auto &i : data_list)
		{
			print(i);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void RegisterList::print(const Data& data)
{
	try
	{
		if (is_empty())
			throw std::out_of_range("Error: List is empty");

		std::cout << "Dev info: " << data._dev_info << std::endl;
		std::cout << "From: " << data._from << std::endl;
		std::cout << "Name: " << data._name << std::endl;
		std::cout << "Register date: " << data._register_date << std::endl;
		std::cout << "Series: " << data._series << std::endl;
		std::cout << "Type: " << data._type << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void RegisterList::remove(const std::string& series)
{
	try
	{
		if (data_list.empty())
			throw std::out_of_range("Error: Out of range");

		data_list.erase(
			std::remove_if(data_list.begin(), data_list.end(), [&](Data const & data) {
			return data._series == series;
		}), data_list.end());
		_size--;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void RegisterList::close()
{
	this->clear();
}

void RegisterList::add(const Data& data)
{
	data_list.push_back(data);
	_size++;
}

void RegisterList::add()
{
	Data data;

	std::cout << std::endl << "Dev info: ";
	getline(std::cin, data._dev_info);

	std::cout << "From: ";
	getline(std::cin, data._from);

	std::cout << "Name: ";
	getline(std::cin, data._name);

	std::cout << "Register date: ";
	getline(std::cin, data._register_date);

	std::cout << "Series: ";
	getline(std::cin, data._series);

	std::cout << "Type: ";
	getline(std::cin, data._type);

	data_list.push_back(data);
	_size++;
}

void RegisterList::clear()
{
	try
	{
		if (_size == 0)
			throw std::out_of_range("Error: List is empty!");
		else
		{
			data_list.clear();
			_size = 0;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
