#include <iostream>

using namespace std;

int result(int a, int b) {

    if (b==0) {
        throw 0;
    }
    return a/b;
}
int main() {

    int c;

    try {

        c = result(10,3);
        cout<<c<<endl;
    }
    catch (int x) {
        cout<<"Division by sero "<<x<<endl;
    }

    return 0;
}