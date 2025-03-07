// Write a C++ program to add two integers using class.

#include <iostream>
using namespace std;

class sum
{
    int a, b;

public:
    int setValues()
    {
        cout << "Enter two number : ";
        cin >> a >> b;
    }

    int add()
    {
        cout << "The sum is : " << a + b;
    }
};

int main()
{
    sum obj;
    obj.setValues();
    obj.add();
    return 0;
}