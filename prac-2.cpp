// Write a C++ Program to find out positive or negative number.

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number : ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " is positive number.";
    }
    else
    {
        cout << a << " is negative number.";
    }

    return 0;
}