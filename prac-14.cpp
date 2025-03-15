// Write a C++ Program to find the area of circle, triangle and rectangle.

#include<iostream>
using namespace std;

#define PI 3.14;

float circle(int R){
    return R * R * PI;
}

int triangle(int b, int h){
    return 0.5 * b * h;
}

int rect(int l, int w){
    return l * w;
}

int main(){
    int r, b, h, l, w, i;

    cout << "1. Area of Circle \n 2. Area of triangle : \n 3. Area of rectangle"<<endl;
    cout << " Enter  choice ( 1 - 3 ) : ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << "Enter radius : ";
        cin >> r;
        cout << "The area of circle is : " << circle(r);
        break;
    case 2:
        cout << "Enter base and height : ";
        cin >> b >> h;
        cout << "The area of triangle is : " << triangle(b, h);
        break;
    case 3:
        cout << "Enter length and breadth : ";
        cin >> l >> w;
        cout << "The area of rectangle is : " << rect(l, w);
        break;
    default:
        break;
    }
    return 0;
}