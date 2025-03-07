// Write a C++ program to create class methods inside the class definition.

#include<iostream>
using namespace std;

class sum{
    public:
    int a, b;

    int add(int a, int b){
        return a + b;
    }
};

int main(){
    sum obj;
    int a = obj.add(10, 20);
    cout << "The sum is : " << a;
    return 0;
}