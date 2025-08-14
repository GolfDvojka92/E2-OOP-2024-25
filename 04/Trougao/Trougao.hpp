#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED

#include <cmath>

class Trougao {
    protected:
    double a,b,c;
    public:
    Trougao() { a = 1; b = 2; c = 3; }
    Trougao(double a, double b, double c) { this->a = a; this->b = b; this->c = c; }
    Trougao(const Trougao &t) { this->a = t.a; this->b = t.b; this->c = t.c; }

    double getA() { return a; }
    double getB() { return b; }
    double getC() { return c; }
    
    void setA(double a) { this->a = a; }
    void setB(double b) { this->b = b; }
    void setC(double c) { this->c = c; }
    
    double getO() { return a + b + c; }
    double getP() { double s = this->getO() / 2; return sqrt(s * (s - a) * (s - b) * (s - c)); }
};

#endif
