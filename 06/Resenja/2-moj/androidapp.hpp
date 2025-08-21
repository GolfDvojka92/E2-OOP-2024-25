#ifndef ANDROIDAPP_DEF
#define ANDROIDAPP_DEF

#include "application.hpp"

class AndroidApp : public Application{
    private:
    double minVersion, targetVersion;
    static int androidCount;
    public:
    AndroidApp();
    AndroidApp(double, double, double);
    AndroidApp(const AndroidApp&);
    ~AndroidApp();
    friend ostream& operator<<(ostream&, const AndroidApp&);
    int getCount();
};

#endif // !ANDROIDAPP_DEF
