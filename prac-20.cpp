// Write a C++ program to calculate the area of circle, rectangle and triangle using function overloading.

#include <iostream>
using namespace std;

#define PI 3.14;

float area(int R)
{
    return R * R * PI;
}

int area(int b, int h)
{
    return 0.5 * b * h;
}

int area(int l, int w, bool isRect)
{
    return l * w;
}

int main()
{
    int r, b, h, l, w;

    cout << "Enter radius : ";
    cin >> r;
    cout << "The area of circle is : " << area(r) << endl;

    cout << "Enter base and height : ";
    cin >> b >> h;
    cout << "The area of triangle is : " << area(b, h) << endl;

    cout << "Enter length and breadth : ";
    cin >> l >> w;
    cout << "The area of rectangle is : " << area(l, w, true) << endl;
    return 0;
}