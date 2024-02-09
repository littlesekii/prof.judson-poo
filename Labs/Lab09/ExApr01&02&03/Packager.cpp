
#include "Packager.h"
#include <iostream>

Packager::Packager(int size)
{
	this->maxSize = size;
	this->packetAmount = size / 4.f;
	this->packetAmount += (size / 4.f - packetAmount == 0.f) ? 0 : 1;

	this->packets = new Packet[packetAmount];
	this->index = 0;
}

Packager::~Packager()
{
	delete[] this->packets;
}

short& Packager::operator[](int index)
{
	
	if (index >= this->maxSize)
	{
		std::cout << "Não foi possível armazenar o valor no índice " << index << ".\n";
		short undefined = -1;
		return undefined;
	}
	int packetIndex = index / 4.f; //1 - 0
	int packetDataIndex = index - packetIndex * 4; //1 - 1

	return this->packets[packetIndex][packetDataIndex];
}

void Packager::send()
{
	if (this->index >= this->maxSize)
		return;

	int packetIndex = index / 4.f; //1 - 0

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << this->packets[packetIndex][i];
	}
	index += 4;
	std::cout << std::endl;
}
