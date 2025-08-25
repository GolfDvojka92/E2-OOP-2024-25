#ifndef OSOBA_DEF
#define OSOBA_DEF

#include <iostream>
#include "dinstring.hpp"

using namespace std;

class Osoba {
    protected:
    DinString ime, prezime;
    public:
    Osoba() : ime(""), prezime("") {}
    Osoba(const char* ime, const char* prezime) : ime(ime), prezime(prezime) {}
    Osoba(const Osoba& o) : ime(o.ime), prezime(o.prezime) {}
    virtual void ispis() {
        cout << "Ime: " << ime << endl;
        cout << "Prezime: " << prezime << endl;
    }
};

#endif // !OSOBA_DEF
