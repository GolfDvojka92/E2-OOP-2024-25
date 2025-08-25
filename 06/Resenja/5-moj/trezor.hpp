#include <type_traits>
#ifndef TREZOR_DEF
#include <iostream>

using namespace std;

template<class SADRZAJ, int KAPACITET>
class Trezor {
    private:
    SADRZAJ sefovi[KAPACITET];
    bool popunjeni[KAPACITET];
    public:
    Trezor() {
        for (int i = 0; i < KAPACITET; i++) {
            popunjeni[i] = false;
        }
    }
    int getBrojPopunjenih() {
        int broj;
        for (int i = 0; i < KAPACITET; i++) {
            if (popunjeni[i])
                broj++;
        }
        return broj;
    }
    void ubaciPredmet(const SADRZAJ& s) {
        for (int i = 0; i < KAPACITET; i++) {
            if (!popunjeni[i]) {
                sefovi[i] = s;
                return;
            }
        }
    }
    bool izbaciPredmet(int sef) {
        if (sef >= KAPACITET || sef < 0) return false;
        if (popunjeni[sef]) {
            popunjeni[sef] = false;
            return true;
        }
        return false;
    }
};

#endif // !TREZOR_DEF
