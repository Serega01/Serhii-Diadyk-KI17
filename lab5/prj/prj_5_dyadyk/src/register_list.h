#pragma once

#include <string>
#include <vector>
#include <fstream>

class RegisterList
{
public:
	RegisterList() : data_list(0), _size(data_list.size())
	{
	}

	~RegisterList()
	{
		if (!this->is_empty())
		{
			std::ofstream os("data.dat", std::ios::binary);

			int size1 = data_list.size();
			os.write((const char*)&size1, sizeof(size1));
			os.write((const char*)&data_list[0], size1 * sizeof(RegisterList::Data));
			os.close();
		}

		this->clear();
	}

	struct Data
	{
		Data() : _series(""),
			_type(""),
			_name(""),
			_register_date(""),
			_dev_info(""),
			_from("")
		{}

		Data(std::string series, std::string type,
			std::string name, std::string register_date,
			std::string dev_info, std::string from) : _series(series),
			_type(type),
			_name(name),
			_register_date(register_date),
			_dev_info(dev_info),
			_from(from)
		{}

		std::string _series;
		std::string _type;
		std::string _name;
		std::string _register_date;
		std::string _dev_info;
		std::string _from;
	};

	std::size_t size();

	bool is_empty();

	const std::vector<RegisterList::Data> &_data_list() const;
	void search_by_series(const std::string& series);
	void search_by_name(const std::string& name);
	void print();
	void print(const Data& data);
	void remove(const std::string& series);
	void close();
	void clear();
	void add(const Data& data);
	void add();

private:
	std::vector<Data> data_list;
	std::size_t _size;
};