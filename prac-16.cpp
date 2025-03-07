// Write a C++ Program to find GCD of two numbers using function

#include<iostream>
using namespace std;

int GCD(int a, int b){
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main(){
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is : " << GCD(a,b);
    return 0;
}