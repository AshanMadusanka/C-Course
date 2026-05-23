#include <iostream>


int main() {


    int x = 10;
    int &y = x;

    y++;
    std::cout << x << std::endl;

    int k = 20;
    int *p = &k;

    int * &z = p; // Pointer referencing. Important note : z does not consume any memory in the program.

    std::cout << z << std::endl;
    std::cout << p << std::endl;

    std::cout << *z << std::endl;
    std::cout << *p << std::endl;
    return 0;
}