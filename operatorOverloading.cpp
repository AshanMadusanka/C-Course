#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int real = 0, int imag = 0);
    friend Complex operator+(Complex c1, Complex c2);
     void Display();

};


Complex:: Complex(int real, int imag) {
   this-> real = real;
   this-> imag = imag;
}

void Complex::Display() {
    cout<<real<<"+i"<<imag<<endl;
}

Complex operator+(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
int main() {

  Complex c1{3,4}, c2{5,6};
    Complex c3;
    c3 = c1 + c2;
    c3.Display();




    return 0;
}