// Write a C++ Program to Convert Fahrenheit to centigrade and vice versa.

#include <iostream>
using namespace std;

float c_f(int c){
    return (c * 9/5) + 32;
}

float f_c(int f){
    return (f - 32) * 5/9 ;
}
int main(){
    int c, f, i;

    cout << "1. Centigrade to Fahrenheit \n 2. Fahrenheit to Centigrade"<<endl;
    cout << " Enter  choice ( 1 - 2 ) : ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << "Enter temperature in Centigrade : ";
        cin >> c;
        cout << "After conversion : " << c_f(c) << endl;
        break;
    case 2:
        cout << "Enter temperature in Fahrenheit : ";
        cin >> f;
        cout << "After conversion : " << f_c(f) << endl;
        break;
    default:
        break;
    }

    return 0;
}