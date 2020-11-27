#include "Room.h"

Room::Room(const size_t& height, const size_t& length, const size_t& width, const string& name)
	:height(height),length(length),width(width),name(name)
{
}

void Room::print() const
{
	cout << "Room: " << name << endl;
	cout << "Heigth: " << height << endl;
	cout << "Length:" << length<<endl;
}

Room& Room::operator++()
{
	++height;
	++width;
	++length;
	return *this;
}

Room Room::operator++(int)
{
	Room old = *this;
	++* this;
	return old;
}

bool Room::operator==(const Room& other) const
{
	return height == other.height
	&& width == other.width 
	&& length == other.width
		;
}

bool Room::operator!=(const Room& other) const
{
	return !(*this == other);
}

bool Room::isValidIndex(const size_t& index) const
{
	return index < size;
}

const string& Room::getName() const
{
	return name;
}

size_t& Room::operator[](const string & nameSize)
{
	static size_t error;
	if (nameSize=="width")
	{
		return width;
	}
	if (nameSize=="length")
	{
		return length;
	}
	if (nameSize=="height")
	{
		return height;
	}
	return error;
}

Room::operator int() const
{
	return length * width;
}

void Room::operator()(const size_t& height, const size_t& length, const size_t& width, const string& name)
{
	this->height = height;
	this->width = width;
	this->length = length;
	if (!name.empty())
	{
		this->name = name;
	}
}

