#include <iostream>

using namespace std;
class  Base {
    public:
    Base() {
        cout<<"Base Class"<<endl;
    }
    Base(int a) {
        cout<<"Base Class"<<a<<endl;
    }
};

class Child :public Base {
    public:
    Child() {
        cout<<"Child Class"<<endl;
    }
    Child(int a,int x):Base(x)
    {
        cout<<"Child Class"<<a<<endl;
    }
};
int main() {
Child c(20,30);

    return 0;
}