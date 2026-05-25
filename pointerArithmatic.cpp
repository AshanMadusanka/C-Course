#include <iostream>

int main() {

    int Array[5] = {1, 2, 3, 4, 5};
    int *p = Array;
    std::cout << *p << std::endl;
    p++;
    std::cout << *p << std::endl;
    *p = 14;
    std::cout << *p << std::endl;
    std::cout << Array[1] << std::endl;

    return 0;
}

