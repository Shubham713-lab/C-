// Write a C++ program to add complex numbers using friend function

#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    friend Complex addComplex(Complex, Complex);
    void display() { cout << "The sum is : " << real << " + " << imag << "i" << endl; }
};

Complex addComplex(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.2, 2.5), c2(1.5, 4.5);
    Complex sum = addComplex(c1, c2);
    sum.display();
    return 0;
}
