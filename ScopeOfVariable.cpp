#include <iostream>

using namespace std;

int x= 24;
int main() {

    int x = 10;
    cout << x << endl;
    {
        int x = 5;
        cout << ::x << endl; // :: referring to global scope
    }

    cout<<:: x << endl;


    return 0;
}