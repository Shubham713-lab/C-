// Write a C++ Program to find out the sum of digits

#include<iostream>
using namespace std;

int main(){
    int a, original, sum=0, remainder;

    cout << "Enter a number : ";
    cin >> a;
    original = a;
    
    if (a<0)
    {
        a = -a;
    }
    
    while ( a != 0)
    {
        remainder = a%10;
        sum += remainder;
        a /= 10;
    }
    
    cout << "Sum of digit of "<< original << " is : " << sum;
    return 0;
}