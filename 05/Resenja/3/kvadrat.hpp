#ifndef KVADRAT_DEF
#define KVADRAT_DEF

#include "pravougaonik.hpp"
class Kvadrat : public Pravougaonik {
    public:
    Kvadrat() : Pravougaonik(1,1) {}
    Kvadrat(double a) : Pravougaonik(a,a) {}
    Kvadrat(const Kvadrat &k) : Pravougaonik(k.a, k.b) {}

    double getO() { return 4 * a; }
    double getP() { return a * a; }
};
#endif // !KVADRAT_DEF
