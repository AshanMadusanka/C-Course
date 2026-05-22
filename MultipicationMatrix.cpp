#include <iostream>
#include <iomanip>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int matrixA[2][3] = {{1, 2, 3},
                         {4, 5, 6}};
    int matrixB[2][3] = {{1, 2, 3},
                        {4, 5, 6}};
    int result[2][3];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            result[i][j] = matrixA[i][j] * matrixB[i][j];
        }
    }
    std::cout << "Element-wise Multiplication Result:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << std::setw(4) << result[i][j];
        }
        std::cout << '\n';
    }
    return 0;
}
