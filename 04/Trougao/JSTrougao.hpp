#ifndef JSTROUGAO_HPP_INCLUDED
#define JSTROUGAO_HPP_INCLUDED

#include "JKTrougao.hpp"

class JSTrougao : public JKTrougao {
    public:
    JSTrougao() { JKTrougao(1,1); }
    JSTrougao(double a) { JKTrougao(a,a); }
    JSTrougao(const JSTrougao &t) { JKTrougao( t.a, t.b ); }
};

#endif 
