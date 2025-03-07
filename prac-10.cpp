// Write a C++ Program to find the factorial of numbers.

#include<iostream>
using namespace std;

int main(){
    int a, fact=1;

    cout << "Enter a number : ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    
    cout << "The factorial of " << a << " is : " << fact;

    return 0;
}