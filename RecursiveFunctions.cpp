#include <iostream>

using namespace std;

void recursive(int n) {

    if ( n >0) {


        recursive(n-1);
        cout << n << endl;
    }
   
}
int main() {

    int a = 5;
    recursive(a);

    return 0;
}