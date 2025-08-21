#ifndef KAMERA_DEF
#define KAMERA_DEF

#include <iostream>
#include "dinstring.hpp"

class Kamera {
    protected:
    int megaPikseli;
    int freeSpace;
    static int photoCount;
    public:
    Kamera() { megaPikseli = 1; freeSpace = 100; }
    Kamera(int megaPikseli, int freeSpace) { this->megaPikseli = megaPikseli; this->freeSpace = freeSpace; }
    Kamera(const Kamera& k) { megaPikseli = k.megaPikseli; freeSpace = k.freeSpace; }
    int getCount() { return photoCount; }
    bool slikaj() {
        if (freeSpace < megaPikseli)
            return false;
        freeSpace-=megaPikseli;
        photoCount++;
        return true;
    }
};

#endif // !KAMERA_DEF
