#ifndef STUDENT_DEF
#define STUDENT_DEF

#include "osoba.hpp"

using namespace std;

class Student : public Osoba{
    protected:
    int brojIndeksa;
    public:
    Student() : Osoba() { brojIndeksa = 0; }
    Student(const char* ime, const char* prezime, int brojIndeksa) : Osoba(ime, prezime) { this->brojIndeksa = brojIndeksa; }
    Student(const Student& s) : Osoba(s) { brojIndeksa = s.brojIndeksa; }
    void ispis() {
        Osoba::ispis();
        cout << "Broj indeksa: " << brojIndeksa << endl;
    }
};

#endif // !STUDENT_DEF
