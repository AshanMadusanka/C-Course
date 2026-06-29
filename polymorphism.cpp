#include <iostream>

using namespace std;

class Shape {
    public:
    virtual int area() =0;
    virtual int perimeter() =0;
   virtual ~Shape();
};

class Rectangle: public Shape {

    private:
    int length;
    int breadth;
    public:

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * length + 2 * breadth;
    }
};

class Circle: public Shape {
    private:
    int radius;
    public:
    Circle(int r) {
        radius = r;
    }
    int area() {
        return radius * radius *2 * 3.14;
    }
    int perimeter() {
        return 2 * radius * 3.14;
    }
};
int main() {

    Shape *ptr = new Rectangle(2,6);
    cout<<ptr -> area()<<endl;
    cout<<ptr -> perimeter();
    ptr = new Circle(3);
    cout<<ptr -> area()<<endl;
    cout<<ptr -> perimeter();

    return 0;
}