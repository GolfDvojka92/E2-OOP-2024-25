#ifndef TELEFON2_DEF
#define TELEFON2_DEF

#include "kamera.hpp"
#include "telefon.hpp"

class TelefonGen2 : public Telefon{
    protected:
    Kamera k;
    public:
    TelefonGen2() : Telefon(), k() {}
    TelefonGen2(const DinString& broj, const Kamera& k) : Telefon(broj), k(k) {}
    bool slikajSliku() { return k.slikaj(); }
};

#endif // !TELEFON2_DEF
