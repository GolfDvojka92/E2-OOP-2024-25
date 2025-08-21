#include "desktopapp.hpp"
#include "computer.hpp"

int DesktopApp::desktopCount = 0;

DesktopApp::DesktopApp() : Application("Java", 100.0), minSysReq(), optimumSysReq() {
    desktopCount++;
}

DesktopApp::DesktopApp(const Computer& minSysReq, const Computer optimumSysReq, const char* language, double sizeMB) : Application(language, sizeMB), minSysReq(minSysReq), optimumSysReq(optimumSysReq) {
    desktopCount++;
}

DesktopApp::DesktopApp(const DesktopApp& a) : Application(a), minSysReq(a.minSysReq), optimumSysReq(a.optimumSysReq) {
    desktopCount++;
}

DesktopApp::~DesktopApp() { desktopCount--; }

ostream& operator<<(ostream& os, const DesktopApp& a) {
    os << "Desktop applikacija" << endl;
    os << (Application)a;
    os << "Minimum requirements: " << a.minSysReq;
    os << "Optimal requirements: " << a.optimumSysReq;
    return os;
}

int DesktopApp::getCount() {
    return desktopCount;
}
