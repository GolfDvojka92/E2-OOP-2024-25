#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "Osoba.hpp"
#include "dinstring.hpp"
class Student : public Osoba {
    protected:
    int brojIndeksa;
    public:
    Student() : Osoba(), brojIndeksa(0) {}
    Student(const char* ime, const char* prezime, int br) : Osoba(ime, prezime), brojIndeksa(br) {}
    Student(const DinString &ime, const DinString &prezime, int br) : Osoba(ime, prezime), brojIndeksa(br) {}
    Student(const Osoba &o, int br) : Osoba(o), brojIndeksa(br) {}
    Student(const Student &s) : Osoba(s.ime, s.prezime), brojIndeksa(s.brojIndeksa) {}

    void predstaviSe() const {
        Osoba::predstaviSe();
        cout << this->brojIndeksa << "\n";
    }
};

#endif // !STUDENT_HPP_INCLUDED
