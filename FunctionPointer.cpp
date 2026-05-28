#include <iostream>

using namespace std;

int Max(int x, int y) {
    return x > y ? x : y;
}

int Min(int k, int j) {
    return k < j ? k : j;
}



int main() {
    int (*fn)(int,int); // Declaration of a function

    fn = Max;  // In here fn pointing to max function
    cout << (*fn)(5,3) << endl;
    fn = Min;  // IN here fn pointing to min function
    cout << (*fn)(5,3) << endl;


    return 0;
}