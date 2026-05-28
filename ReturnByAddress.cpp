#include <iostream>

using namespace std;

int *func() {

    int *array = new int[5];

    for (int i = 0; i < 5; i++) {
        array[i] = i*2;
    }

    cout << array << endl;

    return array;
}

int main() {

    int *a = func();
    cout << a << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i];
    }

    return 0;
}