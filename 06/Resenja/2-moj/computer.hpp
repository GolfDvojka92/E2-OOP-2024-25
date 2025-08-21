#ifndef COMPUTER_DEF
#define COMPUTER_DEF

#include <iostream>
#include "dinstring.hpp"

class Computer {
    private:
    double hddGB, ramGB;
    DinString gCard, os;
    public:

    Computer();
    Computer(double, double, const char*, const char*);
    Computer(const Computer& c);
    friend ostream& operator<<(ostream&, const Computer&);
};

#endif // !COMPUTER_DEF
