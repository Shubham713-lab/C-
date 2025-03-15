/* Write a C++ Program for doing arithmetic operations using function that program includes the following
functions – Addition, Subtraction, Multiplication, Division and Modulus */

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int difference(int a, int b){
    return a - b;
}

int product(int a, int b){
    return a * b;
}

float division(int a, int b){
    return a / b;
}

float mod(int a, int b){
    return a % b;
}

int main(){
    int a, b;

    cout << "Enter two number : ";
    cin >> a >> b;

    cout << "The sum is : " << sum(a,b) << endl;
    cout << "The difference is : " << difference(a,b) << endl;
    cout << "The product is : " << product(a,b) << endl;
    cout << "The division is : " << division(a,b) << endl;
    cout << "The modulus is : " << mod(a,b) << endl;

    return 0;
}