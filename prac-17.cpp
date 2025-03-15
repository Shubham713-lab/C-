// Write a C++ program to find the multiplication values and the cubic values using the inline function.

#include<iostream>
using namespace std;

inline int multiply(int a, int b){
    return a * b;
}

inline int cube(int a){
    return a * a * a;
}

int main(){
    int a, b;

    cout << "Enter two number : ";
    cin >> a >> b;

    cout << "The multiplication values : " << multiply(a,b)<<endl;
    cout << "The cubic values : " << cube(a) << " & " << cube(b)<<endl;
    return 0;
}