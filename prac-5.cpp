// Write a C++ Program to find the Sum of natural numbers.

#include <iostream>
using namespace std;

int main(){
    int a,sum=0;

    cout << "Enter upto natural number : ";
    cin >> a;

    for (int i=0; i <= a; i++){
        sum += i;
    }

    cout << "The sum is : " << sum;
    return 0;
}