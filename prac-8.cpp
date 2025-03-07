// Write a C++ Program to check whether palindrome or not

#include<iostream>
using namespace std;

int main(){
    int a, original, reverse=0, remainder;

    cout << "Enter a number : ";
    cin >> a;
    original = a;

    while ( a != 0){
        remainder = a%10;
        reverse = reverse * 10 + remainder;
        a /= 10;
    }

    if (original == reverse)
    {
        cout << original << " is a palindrome number.";
    }
    else
    {
        cout << original << " is not palindrome number.";
    }
    
    return 0;
}