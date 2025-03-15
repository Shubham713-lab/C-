// Write a C++ Program to check whether prime number or not.

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number : ";
    cin >> a;

    bool isPrime = true;

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "it is prime number";
    }
    else
    {
        cout << "it is not prime";
    }
    return 0;
}