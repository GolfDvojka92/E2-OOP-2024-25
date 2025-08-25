#ifndef DIJAMANT_DEF
#define DIJAMANT_DEF

#include <iostream>
#include <ostream>

class Dijamant {
    private:
    double vrednost, brojKarata;
    public:
    Dijamant() { vrednost = 0; brojKarata = 0; }
    Dijamant(double vrednost, double brojKarata) { this->vrednost = vrednost; this->brojKarata = brojKarata; }
    Dijamant(const Dijamant& d) { vrednost = d.vrednost; brojKarata = d.brojKarata; }
    friend std::ostream& operator<<(std::ostream& os, const Dijamant& d) {
        os << "Dijamant:" << std::endl;
        os << "\tVrednost: " << d.vrednost << std::endl;
        os << "\tBroj karata: " << d.brojKarata << std::endl;
        return os;
    }
};

#endif // !DIJAMANT_
