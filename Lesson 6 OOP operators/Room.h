#pragma once
#include <string>
#include <iostream>
using namespace std;
class Room
{
public:
	Room(const size_t& height = 0, const size_t& length = 3, const size_t & width = 3, const string & name="Room");
	void print()const;
	Room& operator++();
	Room operator++(int);
	bool operator== (const Room& other)const;
	bool operator!= (const Room& other)const;
	bool isValidIndex(const size_t& index)const;
	const string& getName()const;
	size_t& operator[] (const string & nameSize);
	explicit operator int()const; //cast to int, explicit = explicit connect
	void operator()(const size_t& height = 0, const size_t& length = 3, const size_t& width = 3, const string& name = "Room");
private:
	size_t height, width, length;
	string name;
	size_t size = 0;
};

