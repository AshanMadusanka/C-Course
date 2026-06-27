#include <iostream>

using namespace std;

class RationalNumber {
    private:
    int numerator;
    int denominator;
    public:
    RationalNumber(int n = 0, int d = 0 );
    friend RationalNumber operator+(RationalNumber r1, RationalNumber r2);
    friend ostream& operator<<(ostream &os, RationalNumber r);
};
int main() {
    RationalNumber num1(2,3),num2(4,5),d3;
    d3=num1+num2;
    cout<<d3<<endl;
    
    return 0;
}

RationalNumber::RationalNumber(int n, int d) {
    numerator = n;
    denominator = d;
}
RationalNumber operator+(RationalNumber r1, RationalNumber r2) {
    RationalNumber temp;
    temp.numerator = r1.numerator + r2.numerator;
    temp.denominator = r1.denominator + r2.denominator;
    return temp;
}
ostream& operator<<(ostream &os, RationalNumber r) {
    os << r.numerator << "/" << r.denominator;
    return os;
}