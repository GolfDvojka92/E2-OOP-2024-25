#include "computer.hpp"

Computer::Computer() : hddGB(256), ramGB(16), gCard(""), os("") {}

Computer::Computer(double hdd, double ram, const char* gc, const char* os) : hddGB(hdd), ramGB(ram), gCard(gc), os(os) {}

Computer::Computer(const Computer &c) : hddGB(c.hddGB), ramGB(c.ramGB), gCard(c.gCard), os(c.os) {}

ostream& operator<<(ostream &os, const Computer &c) {
    os << "-------------------------------" << endl;
    os << "\tHDD:" << c.hddGB << endl;
    os << "\tRAM:" << c.ramGB << endl;
    os << "\tGraficka:" << c.gCard << endl;
    os << "-------------------------------" << endl;
    return os;
}
