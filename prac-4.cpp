// Write a C++ Program swapping of 2 numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Enter two number : ";
    cin >> a >> b;

    cout << " Before swapping : a = " << a << " b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << " After swapping : a = " << a << " b = " << b << endl;
    return 0;
}