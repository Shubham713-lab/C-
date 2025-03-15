// Write a C++ program to add complex numbers using friend function

#include <iostream>
using namespace std;

class Complex {
    float r1, r2, i1, i2;
public:
    void setValues(){
        cout << "Enter first complex no. : ";
        cin >> r1 >> i1;
        cout << "Enter second complex no. : ";
        cin >> r2 >> i2;
    }
    friend void addComplex(Complex c1);
};

void addComplex(Complex c1) {
    cout << "The sum of Complex no. is : " << c1.r1 + c1.r2 << " + " << c1.i1 + c1.i2 << "i"<<endl;
}

int main() {
    Complex c1;
    c1.setValues();
    addComplex(c1);
    return 0;
}
