
#include "Packet.h"
#include <iostream>

Packet::Packet()
{
	this->data = {};
	this->maxSize = sizeof(this->data) / sizeof(this->data.part.z);
	this->index = 0;
}

void Packet::begin()
{
	this->index = 0;
}

void Packet::end()
{
	this->index = this->maxSize;
}

bool Packet::operator<<(short val)
{
	if (this->index >= this->maxSize)
		return false;

	switch (this->index++)
	{
		case 0:
			this->data.part.w = val;
			break;
		case 1:
			this->data.part.x = val;
			break;
		case 2:
			this->data.part.y = val;
			break;
		case 3:
			this->data.part.z = val;
			break;
	}
	return true;
}

void Packet::send()
{
	std::cout << this->data.all;
}

bool Packet::operator>>(short& val)
{
	if (this->index >= this->maxSize)
		return false;

	switch (this->index++)
	{
		case 0:
			val = this->data.part.w;
			break;
		case 1:
			val = this->data.part.x;
			break;
		case 2:
			val = this->data.part.y;
			break;
		case 3:
			val = this->data.part.z;
			break;
	}
	return true;
}

short& Packet::operator[](int index)
{
	switch (index)
	{
		case 0:
			return this->data.part.w;
			break;
		case 1:
			return this->data.part.x;
			break;
		case 2:
			return this->data.part.y;
			break;
		case 3:
			return this->data.part.z;
			break;
	}
}

istream& operator>>(istream& in, Packet& p)
{
	in >> p[0];
	in >> p[1];
	in >> p[2];
	in >> p[3];
	return in;
}

ostream& operator<<(ostream& out, Packet& p)
{
	out << p[0] << " " 
		<< p[1] << " " 
		<< p[2] << " " 
		<< p[3];
	return out;
}
