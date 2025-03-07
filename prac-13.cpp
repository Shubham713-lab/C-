// Write a C++ Program to find the cube of number using function

#include<iostream>
using namespace std;

int cube(int a){
    return a * a * a;
}

int main(){
    int a;

    cout << "Enter a number : ";
    cin >> a;

    cout << "The cube of " << a << " is : " << cube(a);

    return 0;
}