#include <iostream>

using namespace std;
class Base {
    public:
   virtual void fun1() = 0;
};

class Derived: public Base {
    public:
    void fun1() {
        cout<<"Derived Class::fun1"<<endl;
    }
};
int main() {

 Base *p = new Derived();
    p->fun1();

    return 0;
}