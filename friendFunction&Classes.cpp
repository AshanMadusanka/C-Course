#include <iostream>

using namespace std;

class Test {
    public:
    int a;
    protected:
    int b;
    private:
    int c;

    friend void fun1();
    friend class Test2;
};

class Test2 {
    public:
    void fun2(){

        Test t;
        t.a = 60;
        t.b = 80;
        t.c = 120;
    }
};

void fun1() {
    Test t;
    t.a = 10;
    t.b = 20;
    t.c = 30;
    cout << t.a << endl;
    cout << t.b << endl;
    cout << t.c << endl;
}

int main() {

    Test2 t2;
    t2.fun2();
    fun1();

    return 0;
}