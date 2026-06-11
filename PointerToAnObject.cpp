#include <iostream>

using namespace std;

class Rectangle {
    public:
    int length;
    int width;

    int area() {
        return length * width;
    }
    int perimeter() {
        return 2 * (length +  width);
    }
};

int main() {

    Rectangle *rect1 = new Rectangle;
    Rectangle *rect2 = new Rectangle;
    rect1->length = 5;
    rect1->width = 6;
    rect2->length = 4;
    rect2->width = 5;
    cout << rect1->area() << endl;
    cout << rect1->perimeter() << endl;
    cout << rect2->area() << endl;
    cout << rect2->perimeter() << endl;

    return 0;
}