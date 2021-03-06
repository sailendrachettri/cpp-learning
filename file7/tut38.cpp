#include <iostream>
using namespace std;

// Base class
class Base
{
    int data1; // private by default and it is not inheritable

    public:
        int data2;

        void setData();
        int getData1();
        int getData2();
};

// Defining base class's method
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base ::getData1(){
    return data1;
}

int Base ::getData2(){
    return data2;
}

// Derived class
class Derived : public Base{
    int data3;

    public:
        void process();
        void display();
};

// methods of derived class - defining
void Derived :: process(){
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<< "Value of data1 is "<< getData1()<<endl;
    cout<< "Value of data2 is "<< data2<<endl;
    cout<< "Value of data3 is "<< data3<<endl;
}

int main()
{
    cout << "Single Inheritance Deep Dive" << endl;

    Derived derObj;
    derObj.setData();
    derObj.process();
    derObj.display();

    return 0;
}