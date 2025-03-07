// Write a C++ Program To calculate Volume of Box using Constructor.

#include <iostream>
using namespace std;

class volume{
    int l, b, h;

    public:
    volume(){
        cout << "Enter length, breadth, height : ";
        cin >> l >> b >> h ;
    }

    int display(){
        cout << "The volume of box : " << l*b*h;
    }
};

int main(){
    volume s;
    s.display();

    return 0;
}