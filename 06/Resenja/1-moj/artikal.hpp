#ifndef ARTIKAL_DEF
#define ARTIKAL_DEF

#include <iostream>
#include "dinstring.hpp"

class Artikal {
    private:
    DinString naziv;
    double cena;
    static int instanci;
    public:
    Artikal(const char* n, const double c) : naziv(n), cena(c) { instanci++; }
    Artikal(const DinString &n, const double c) : naziv(n), cena(c) { instanci++; }
    Artikal(const Artikal &a) : naziv(a.naziv), cena(a.cena) { instanci++; }
    ~Artikal() { instanci--; }
    
    friend ostream& operator<<(ostream& ,const Artikal&);
};
#endif // !ARTIKAL_DEF
