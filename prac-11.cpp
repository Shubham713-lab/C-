// Write a C++ Program to reverse the given numbers.

#include<iostream>
using namespace std;

int main(){
    int a, original, reverse=0, remainder;

    cout << "Enter a number : ";
    cin >> a;
    original = a;

    while ( a != 0)
    {
        remainder = a%10;
        reverse = reverse * 10 + remainder;
        a /= 10;
    }
    
    cout << "The reverse of " << original << " is : " << reverse;
    return 0;
}