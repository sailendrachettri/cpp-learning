#include <iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;

    public:
        int d, e;


        void setData(int a1, int b1, int c1); // Declaration will implement later
        
        void getData(){
            cout<< "The value of a is "<<a<<endl;
            cout<< "The value of b is "<<b<<endl;
            cout<< "The value of c is "<<c<<endl;
            cout<< "The value of d is "<<d<<endl;
            cout<< "The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    cout<< "Classes, Public and Private access modifiers in C++"<<endl;

    Employee sailendra;
    sailendra.d = 10;
    sailendra.e = 20;
    sailendra.setData(1, 2, 9);
    sailendra.getData();

    return 0;
}