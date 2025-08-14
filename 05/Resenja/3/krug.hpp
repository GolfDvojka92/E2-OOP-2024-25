#ifndef KRUG_DEF
#define KRUG_DEF

#include "elipsa.hpp"
class Krug : public Elipsa {
    public:
    Krug() : Elipsa(1, 1) {}
    Krug(double x) : Elipsa(x, x) {}
    Krug(const Krug &k) : Elipsa(k.x, k.x) {}

    double getO() { return 3 * x * MATH_PI; }
    double getP() { return x * x * MATH_PI; }
};
#endif // !KRUG_DEF
