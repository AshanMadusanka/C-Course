#include <iostream>

using namespace std;

void Search(int *array, int size, int key) {

    for (int i = 0; i < size; i++) {

        if (array[i] == key) {
            cout <<"Key Found: "<< i << endl;
            array[i] = 13;
            break;
        }

    }
}
int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Search(array,std::size(array),7);

    for (int i : array) {
        cout << i << endl;
    }

    return 0;
}