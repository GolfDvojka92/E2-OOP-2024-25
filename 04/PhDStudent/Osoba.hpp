#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>
#include "dinstring.hpp"

class Osoba {
    protected:
    DinString ime;
    DinString prezime;
    public:
    Osoba () : ime(""), prezime("") {}
    Osoba (const char* ime, const char* prezime) : ime(ime), prezime(prezime) {}
    Osoba (const DinString &ime, const DinString &prezime) : ime(ime), prezime(prezime) {}
    Osoba (const Osoba &o) : ime(o.ime), prezime(o.prezime) {}

    void predstaviSe() const {
        cout << this->ime << " " << this->prezime << "\n";
    }
};

#endif // !OSOBA_HPP_INCLUDED
