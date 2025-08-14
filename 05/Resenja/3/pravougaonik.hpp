#ifndef PRAVOUGAONIK_DEF
#define PRAVOUGAONIK_DEF

#include "figura.hpp"
class Pravougaonik : public Figura {
    protected:
    double a, b;
    public:
    Pravougaonik() : a(1), b(2) {}
    Pravougaonik(double aa, double bb) : a(aa), b(bb) {}
    Pravougaonik(const Pravougaonik &p) : a(p.a), b(p.b) {}

    double getA() const { return a; }
    double getB() const { return b; }

    double getO() const { return 2 * (a + b); }
    double getP() const { return a * b; }
};

#endif // !PRAVOUGAONIK_DEF
