#ifndef PHDSTUDENT_HPP_INCLUDED
#define PHDSTUDENT_HPP_INCLUDED

#include "Osoba.hpp"
#include "Student.hpp"
#include "dinstring.hpp"


class PhDStudent : public Student {
    private:
    double prosecnaOcena;
    public:
    PhDStudent () : Student(), prosecnaOcena(10.00) {}
    PhDStudent (const char* ime, const char* prezime, int brojIndeksa, double prosek) : Student(ime, prezime, brojIndeksa), prosecnaOcena(prosek) {}
    PhDStudent (const DinString &ime, const DinString &prezime, int brojIndeksa, double prosek) : Student(ime, prezime, brojIndeksa), prosecnaOcena(prosek) {}
    PhDStudent (const Osoba &o, int brojIndeksa, double prosek) : Student(o, brojIndeksa), prosecnaOcena(prosek) {}
    PhDStudent (const Student &s, double prosek) : Student(s), prosecnaOcena(prosek) {}
    PhDStudent (const PhDStudent &ps) : Student(ps.ime, ps.prezime, ps.brojIndeksa), prosecnaOcena(ps.prosecnaOcena) {}

    void predstaviSe() {
        Student::predstaviSe();
        cout << this->prosecnaOcena << "\n";
    }
};

#endif // !PHDSTUDENT_HPP_INCLUDED
