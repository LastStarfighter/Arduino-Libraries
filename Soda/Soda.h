#ifndef Soda_h
#define Soda_h

#include "Arduino.h"

class Soda
{
public:
	Soda();
	~Soda();
    void pins(int a, int b, int c, int d, int e, int f, int g, int dp);
    void write(int number);
    void clear();
    
private:
    byte numeral[10];
    int segmentPins[8];
};

#endif
