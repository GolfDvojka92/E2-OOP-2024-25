#ifndef LIST_DEF
#define LIST_DEF

#include <iostream>

using namespace std;

template<class T>
class List {
    private:
    struct ListEl {
        T value;
        struct ListEl* next;
    };

    ListEl* head;
    ListEl* tail;
    int elNum;
    public:
    
};

#endif // !LIST_DEF
