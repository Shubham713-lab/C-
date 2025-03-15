// Write a C++ code to check whether a no is Prime or not using class.

#include <iostream>
using namespace std;

class prime
{
    int a;

public:
    int input()
    {
        cout << "Enter a number : ";
        cin >> a;
    }

    int check()
    {
        bool isPrime = (a > 1);

        for (int i = 2; i < a / 2; i++)
        {
            if (a % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << "The number is prime number.";
        }
        else
        {
            cout << "The number is not prime number.";
        }
    }
};

int main()
{
    prime obj;
    obj.input();
    obj.check();

    return 0;
}