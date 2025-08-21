#ifndef DESKTOPAPP_DEF
#define DESKTOPAPP_DEF

#include "application.hpp"
#include "computer.hpp"

class DesktopApp : public Application{
    private:
    Computer minSysReq, optimumSysReq;
    static int desktopCount;
    public:
    DesktopApp();
    DesktopApp(const Computer& minSysReq, const Computer optimumSysReq, const char* language, double sizeMB);
    DesktopApp(const DesktopApp&);
    ~DesktopApp();
    friend ostream& operator<<(ostream&, const DesktopApp&);
    int getCount();
};

#endif // !DESKTOPAPP_DEF
