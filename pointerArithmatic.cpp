#include <iostream>

int main() {

    int Array[5] = {1, 2, 3, 4, 5};
    int *p = Array;
    std::cout << *p << std::endl;
    p++;
    std::cout << *p << std::endl;

    return 0;
}