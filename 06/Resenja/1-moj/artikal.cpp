#include "artikal.hpp"

int Artikal::instanci = 0;

ostream& operator<<(ostream& os, const Artikal& a) {
    os << "----------Artikal-----------";
    os << "\tNaziv:" << a.naziv << endl;
    os << "\tCena" << a.cena << endl;
    os << "\tInstanci:" << a.instanci << endl;
    os << "----------------------------";
    return os;
}
