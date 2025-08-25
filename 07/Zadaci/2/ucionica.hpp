#ifndef UCIONICA_DEF
#define UCIONICA_DEF

#include "student.hpp"
#include "profesor.hpp"
#include "list.hpp"

class Ucionica {
    private:
    List<Osoba> spisak;
    DinString naziv;
    int kapacitet;
    public:
    Ucionica(const char* naziv, int kapacitet) : naziv(naziv) { this->kapacitet = kapacitet; }

    bool dodajOsobu(const Osoba& o) {
        if (spisak.size() + 1 > kapacitet)
            return false;
        spisak.add(spisak.size() + 1, o);
        return true;
    }

    void ispisPrisutnih() {
        if (spisak.size() == 0) {
            cout << "Ucionica je prazna" << endl;
            return;
        }
        Osoba o;
        cout << "Prisutni su: " << endl;
        for (int i = 1; i <= spisak.size(); i++) {
            spisak.read(i, o);
            o.ispis();
        }
    }
};

#endif // !UCIONICA_DEF
