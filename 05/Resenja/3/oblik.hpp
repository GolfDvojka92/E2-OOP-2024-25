#ifndef OBLIK_DEF
#define OBLIK_DEF

#include "kvadrat.hpp"
#include "krug.hpp"

class Oblik
{
    private:
    Kvadrat a;
    Krug b;
    public:
    Oblik() : a(2), b(1) {}
    Oblik(double x) : a(x), b(x / 2) {}
    Oblik(const Oblik &o) : a(o.a), b(o.b) {}

    double getO() { return a.getO() + b.getO(); }
    double getP() { return a.getP() - b.getP(); }
};

#endif

