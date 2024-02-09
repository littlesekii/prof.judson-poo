#pragma once
#include <iostream>
using std::istream;
using std::ostream;

class Packet
{
    union Data
    {
        struct {
            short w;
            short x;
            short y;
            short z;
        } part;

        long long all;
    };

private:
    Data data;
    size_t maxSize;
    size_t index;

public:
    Packet();

    void begin();
    void end();

    void send();

    bool operator<<(short val);
    bool operator>>(short& val);

    short& operator[](int index);

    friend istream& operator>>(istream& in, Packet& p);
    friend ostream& operator<<(ostream& out, Packet& p);

};