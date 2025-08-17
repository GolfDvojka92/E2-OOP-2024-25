#include "application.hpp"

int Application::appCount = 0;

Application::Application() : language(""), author(""), sizeMB(100) { appCount++; }

Application::Application(const char* language, double sizeMB) : language(language), sizeMB(sizeMB), author("Pusi ga glupane d.o.o") { appCount++; }

Application::Application(const Application &a) : language(a.language), sizeMB(a.sizeMB), author("Pusi ga glupane d.o.o") { appCount++; }

Application::~Application() { appCount--; }

ostream& operator<<(ostream& os, const Application &a) {
    os << "----------Application----------" << endl;
    os << "\tlanguage:" << a.language << endl;
    os << "\tsize:" << a.sizeMB << endl;
    os << "\tauthor:" << a.author << endl;
    os << "\tappCount:" << a.appCount << endl;
    return os;
}

int Application::getCount() { return appCount; }
