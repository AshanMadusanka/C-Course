#include <iostream>

using namespace std;

class Base {
    private:
    int a;
    public:
    Base() {
        a=0;
    }
    void display() {
        cout<< "Display Message:" << endl;
    }
};

class Child : public Base {
    private:
    int b;
    public:
    Child() {
        b=0;
    }
    void show() {
        cout<< "Show Message:" << b << endl;
    }
};
int main() {

    Child c;
    c.show();



    return 0;
}