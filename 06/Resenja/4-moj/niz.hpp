#ifndef NIZ_DEF
#define NIZ_DEF

#include <iostream>

using namespace std;

template<class T, int D>
class Niz {
    private:
    T el[D];
    int brEl;
    public:
    Niz() { brEl = 0; }
    ~Niz() {}

    int getBrEl() { return brEl; }

    T operator[](int i) const { return el[i]; }
    T& operator[](int i) { return el[i]; }

    Niz<T, D>& operator=(const Niz<T, D>&);

    void printNiz() const;
    bool insertNiz(const T&);
};

template<class T, int D>
Niz<T, D>& Niz<T,D>::operator=(const Niz<T,D>& n) {
    for(brEl = 0; brEl < n.brEl; brEl++) {
        el[brEl] = n.el[brEl];
    }
    return *this;
}

template<class T, int D>
void Niz<T, D>::printNiz() const {
    cout << "(";
    for (int i = 0; i < brEl - 1; i++) {
        cout << el[i] << ", ";
    }
    cout << el[brEl - 1] << ")" << endl;
}

#endif // !NIZ_DEF
