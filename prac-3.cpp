// Write a C++ Program to find the greatest of 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three number : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is largest.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is largest.";
    }
    else
    {
        cout << c << " is largest.";
    }

    return 0;
}