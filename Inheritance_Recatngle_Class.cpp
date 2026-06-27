#include <iostream>

using namespace std;

class Rectangle {

private:
    int width;
    int height;

public:
    /*Constructors*/
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(Rectangle &r);

    /*Mutators*/
    void setWidth(int w);
    void setHeight(int h);

    /*Accessors*/
    int getWidth();
    int getHeight();

    /*Facilitators*/
    int area();
    int perimeter();

    /*Enquiry*/
    bool isSquare();

    /*Destructor*/
    ~Rectangle();

};

class Cuboid: public Rectangle {
    private:
    int breadth;
    public:
    Cuboid(){breadth =1;};
    Cuboid(int h){breadth=h;};
    Cuboid(Cuboid &c){breadth=c.breadth;};
    void setBreadth(int h){breadth=h;};
    int getHeight(){return breadth;};
    int volume(){return  getWidth()*getHeight()*breadth;};

};

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

Rectangle::Rectangle(Rectangle &r) {
    width = r.width;
    height = r.height;

}

void Rectangle::setWidth(int w) {
    width = w;
}

void Rectangle::setHeight(int h) {
    height = h;
}

int Rectangle::getWidth() {

    return width;
}

int Rectangle::getHeight() {
    return height;
}
int Rectangle::area() {
    return (width * height);
}

int Rectangle::perimeter() {
    return (width * 2) + (height * 2);
}

bool Rectangle::isSquare() {
    return (width == height && height == width);
}

Rectangle::~Rectangle() {
    cout <<"Rectangle Destory." <<endl;
}


int main() {

    Cuboid c{25};
    c.setHeight(10);
    c.setWidth(10);
    cout<<c.volume()<<endl;
    cout<<c.area()<<endl;

    return 0;
}