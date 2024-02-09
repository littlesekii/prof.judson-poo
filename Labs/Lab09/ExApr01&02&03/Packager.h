#pragma once
#include "Packet.h"

class Packager
{
private:
	Packet* packets;
	int packetAmount;
	int maxSize;
	int index;

public:
	Packager(int size);
	~Packager();


	short& operator[](int index);

	void send();
};

