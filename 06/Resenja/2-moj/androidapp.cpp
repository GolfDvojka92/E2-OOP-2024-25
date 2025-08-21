#include "androidapp.hpp"
#include "application.hpp"

int AndroidApp::androidCount = 0;

AndroidApp::AndroidApp() : Application("Java", 100.0) {
    minVersion = 1.0;
    targetVersion = 1.1;
    androidCount++;
}

AndroidApp::AndroidApp(double minVersion, double targetVersion, double sizeMB) : Application("Java", sizeMB) {
    this->minVersion = minVersion;
    this->targetVersion = targetVersion;
    androidCount++;
}

AndroidApp::AndroidApp(const AndroidApp& a) : Application(a) {
    minVersion = a.minVersion;
    targetVersion = a.targetVersion;
    androidCount++;
}

AndroidApp::~AndroidApp() { androidCount--; }

ostream& operator<<(ostream& os, const AndroidApp& a) {
    os << "Android applikacija" << endl;
    os << (Application)a;
    os << "Minimum SDK version: " << a.minVersion << endl;
    os << "Target SDK version: " << a.targetVersion << endl;
    return os;
}
