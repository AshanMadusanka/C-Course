#include <iostream>

using namespace std;

/**
 * @brief Swaps the values of two integers using pass-by-reference.
 * @param a Reference to the first integer. Its value is exchanged with b.
 * @param b Reference to the second integer. Its value is exchanged with a.
 */
void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}


/**
 * @brief Swaps the values of two integers using pass-by-address (pointers).
 * @param a Pointer to the first integer. Its dereferenced value is exchanged with b.
 * @param b Pointer to the second integer. Its dereferenced value is exchanged with a.
 */
void swapAdd(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a = 10;
    int b = 20;
    cout << a << " "<< b<<endl;
    swap(a, b);
    cout << a << " "<< b<<endl;
    swapAdd(&b,&a);
    cout << a << " "<< b<<endl;

    return 0;
}
