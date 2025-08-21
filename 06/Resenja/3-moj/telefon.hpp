#ifndef TELEFON_DEF
#define TELEFON_DEF

#include "dinstring.hpp"

class Telefon {
    protected:
    DinString broj;
    public:
    Telefon() : broj() {}
    Telefon(const char* broj) : broj(broj) {}
    Telefon(const DinString& broj) : broj(broj) {}
    bool pozovi(const DinString& broj) {
        if (this->broj == broj)
            return false;
        return true;
    }
};

#endif // !TELEFON_DEF
