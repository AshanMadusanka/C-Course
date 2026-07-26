#include <iostream>

using namespace std;

class Demo {
private:
    int *ptr;
public:
    Demo() {

        ptr = new int[10];

        cout<<"Constructor is called"<<endl;
    }

    ~Demo() {

        cout<<"Destructor is called"<<endl;

        delete []ptr;
    }
};

int main() {

    Demo *ptr = new Demo();

    delete ptr;

    return 0;
}