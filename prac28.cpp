// Write a C++ Program to demonstrate the Concept of Destructor

#include <iostream>
using namespace std;

class show{
    public:
    show(){
        cout << "constructor created."<<endl;
    }

    ~show(){
        cout << "obj destructed by destructor."<<endl;
    }
}; 

int main(){
    show obj;

    return 0;
}