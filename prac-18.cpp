// Write a C++ program to find Square of a number using inline function.

#include<iostream>
using namespace std;

inline int squa(int a){
    return a * a;
}

int main(){
    int a;

    cout << "Enter a number : ";
    cin >> a;

    cout << "The cubic values : " << squa(a)<<endl;
    return 0;
}