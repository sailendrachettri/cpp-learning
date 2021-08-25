#include <iostream>

using namespace std;

void sumA(){
    int a = false;
    cout << a << "\n";
}

int main()
{
    // int a = 4;
    // int b = 5;

    int a = 10, b = 20;
    int sum = a + b;

    float pi = 3.145;

    char c = 'z';
    cout<< "The value of PI is "<< pi << "\n";
    cout<< "The value of c is "<< c << "\n";
    cout<< "The value of a is "<< a << " and the value of b is " << b << " and the result is " <<sum<< "\n";


    sumA();
    return 0;
}