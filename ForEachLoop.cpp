#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int numbers[][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    for (auto &x : numbers) {

       for (int y : x) {

           std::cout << y;
       }
        std::cout << std::endl;
    }

    return 0;
}