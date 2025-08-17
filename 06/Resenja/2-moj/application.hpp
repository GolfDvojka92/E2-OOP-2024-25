#ifndef APPLICATION_DEF
#define APPLICATION_DEF

#include <iostream>
#include "dinstring.hpp"

class Application {
    protected:
    DinString language, author;
    double sizeMB;
    static int appCount;
    public:
    Application();
    Application(const char*, double);
    Application(const Application&);
    ~Application();
    friend ostream& operator<<(ostream&, const Application&);
    int getCount();
};

#endif // !APPLICATION_DEF
