// Write a C++ Program to check whether leap year or not.

#include <iostream>
using namespace std;

int main(){
    int year;

    cout << "Enter year : ";
    cin >> year;

    if ((year%4 == 0 && year%100 != 0) || (year/400 == 0)){
        cout << year << " is leap year.";
    }
    else {
        cout << year << " is not leap year.";
    }
    return 0;
}