// Write a C++ code for read and print student information using class.

#include<iostream>
using namespace std;

class info{
    string name;
    int age, roll;

    public:
    int setValues(){
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter Roll : ";
        cin >> roll;
    }

    int display(){
        cout << " Name : " << name << "\n Age : " << age << "\n Roll : " << roll << endl;
    }
};

int main(){
    info S1;
    S1.setValues();
    S1.display();

    return 0;
}