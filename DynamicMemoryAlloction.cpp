#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int *ptr = new int[10];
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }
    for (int i = 0; i < 10; i++) {

        std::cout << ptr[i] << std::endl;
    }

    delete [] ptr;

    std::cout<<"New Size Array was created"<<std::endl;

    ptr = new int[20];
    for (int i = 0; i < 20; i++) {
        ptr[i] = i;
    }

    for (int i = 0; i < 20; i++) {
        std::cout << ptr[i] << std::endl;
    }

    delete [] ptr;
    ptr = nullptr;

    return 0;
}