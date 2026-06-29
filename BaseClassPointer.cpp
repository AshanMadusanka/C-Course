#include <iostream>

using namespace std;

class Base {
    public:
    void fun1() {
        cout<<"Base::fun1()"<<endl;
    }
};

class Derived: public Base {
    public:
    void fun1() {
        cout<<"Derived::fun2()"<<endl;
    }
};

int main() {

    Base *p = new Derived();
    p->fun1();
    //p->fun2();


    return 0;
}