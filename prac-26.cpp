// Write a C++ program to add complex numbers using friend function

#include <iostream>
using namespace std;

class sum
{
    int img1, img2, num1, num2;

public:
    int setValues()
    {
        cout << "Enter first complex no. : ";
        cin >> num1 >> img1;
        cout << "Enter second complex no. : ";
        cin >> num2 >> img2;
    }
    int add()
    {
        cout << "The sum of complex no. is : " << num1 + num2 << " + " << img1 + img2 << "i";
    }
};

int main()
{
    sum obj;
    obj.setValues();
    obj.add();
    return 0;
}