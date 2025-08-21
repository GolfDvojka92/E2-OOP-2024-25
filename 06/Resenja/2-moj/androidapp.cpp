#include "androidapp.hpp"
#include "application.hpp"

AndroidApp::AndroidApp() : Application("Java", 100.0), minVersion(1.0), targetVersion(1.1) { androidCount++; }
AndroidApp::AndroidApp(double sizeMB, double minVersion, double targetVersion) : Application("Java", sizeMB), minVersion(minVersion), targetVersion(targetVersion) { androidCount++; }
AndroidApp::AndroidApp(const AndroidApp& aa) : Application(aa), minVersion(aa.minVersion), targetVersion(aa.targetVersion) { androidCount++; }
AndroidApp::~AndroidApp() { androidCount--; }

