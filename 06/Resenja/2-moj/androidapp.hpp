#ifndef ANDROIDAPP_DEF
#define ANDROIDAPP_DEF

#include "application.hpp"
#include <ostream>

class AndroidApp : public Application{
    private:
    double minVersion, targetVersion;
    static int androidCount;
    public:
    AndroidApp();
    AndroidApp(double, double, double);
    AndroidApp(const AndroidApp&);
    ~AndroidApp();
    friend ostream& operator<<(const ostream&, const AndroidApp&);
};

#endif // !ANDROIDAPP_DEF
