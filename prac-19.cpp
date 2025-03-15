// Write a C++ program to find volume of cube, cylinder, sphere by function overloading

#include<iostream>
using namespace std;

#define PI 3.14
int volume(int s){
    return s * s * s;
}

int volume(int r, int h){
    return PI * r * r * h;
}

int volume(int r, bool isSphere){
    return (4/3) * PI * r * r * r;
}

int main(){
    int s, r, h;

    cout << "Enter side of cube : ";
    cin >> s;
    cout << "The volume of cube : " << volume(s) << endl;

    cout << "Enter radius and height of cylinder : ";
    cin >> r >> h;
    cout << "The volume of cylinder : " << volume(r,h) << endl;
    
    cout << "Enter radius of sphere : ";
    cin >> r;
    cout << "The volume of sphere : " << volume(r, true) << endl;
    
    return 0;
}