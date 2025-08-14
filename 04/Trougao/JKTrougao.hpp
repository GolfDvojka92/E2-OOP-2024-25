#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED

#include "Trougao.hpp"

class JKTrougao : public Trougao {
    public:
    JKTrougao() { Trougao(1,2,2); }
    JKTrougao(int a, int b) { Trougao(a,b,b); }
    JKTrougao(const JKTrougao &t) { Trougao(t.a,t.b,t.c); }
};

#endif // !JKTROUGAO_HPP_INCLUDED
