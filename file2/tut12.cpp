#include <iostream>

using namespace std;

int main()
{
    cout << "Pointers in C++" << endl;

    int a = 1;
    int *b = &a;

    // cout<< "a = "<<a<<endl;
    // cout<< "add of = "<<addressof(a)<<endl; // &a
    // cout<< "b = "<<b<<endl;
    // cout<< "add of b = "<<addressof(b)<<endl;

    // Pointer to pointer
    int **c = &b;
    cout << "&a = " << &a << endl;   // address of a
    cout << "b = " << b << endl;     // b holds the address of a
    cout << "&b = " << &b << endl;   // address of b
    cout << "C = " << c << endl;     // holds address of b
    cout << "*C = " << *c << endl;   // will get the value of b
    cout << "**C = " << **c << endl; // will get the value of a

    return 0;
}