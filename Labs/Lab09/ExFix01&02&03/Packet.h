#pragma once
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

};

