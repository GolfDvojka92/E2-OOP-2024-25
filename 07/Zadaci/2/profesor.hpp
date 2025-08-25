#ifndef PROFESOR_DEF
#define PROFESOR_DEF

#include "dinstring.hpp"
#include "osoba.hpp"

using namespace std;

class Profesor : public Osoba{
    protected:
    DinString predmet;
    public:
    Profesor() : Osoba() { predmet = 0; }
    Profesor(const char* ime, const char* prezime, const char* predmet) : Osoba(ime, prezime), predmet(predmet) {}
    Profesor(const Profesor& s) : Osoba(s), predmet(s.predmet) {}
    void ispis() {
        Osoba::ispis();
        cout << "Predmet: " << predmet << endl;
    }
};

#endif // !PROFESOR_DEF
