#ifndef ELIPSA_DEF
#define ELIPSA_DEF

#define MATH_PI 3.14

#include "figura.hpp"

class Elipsa : public Figura {
    protected:
    double x, y;
    public:
    Elipsa() : x(1), y(1) {}
    Elipsa(double xx, double yy) : x(xx), y(yy) {}
    Elipsa(const Elipsa &e) : x(e.x), y(e.y) {}
    
    double getX() { return x; }
    double getY() { return y; }

    double getO() { return MATH_PI * (3 * (x + y) - sqrt((3 * x + y) * (x + 3 * y))); }
    double getP() { return x * y * MATH_PI; }
};

#endif // !ELIPSA_DEF
