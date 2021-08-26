#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

// This will not swap the actual value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// But this will swap the value
// Call by reference using pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variable
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout<< "Call by Value & Call by Reference in C++"<<endl;

    int a = 10; 
    int b = 20;
    // int res = sum(a, b);
    // cout<< "Result: "<<res<<endl;

    // cout<< "a = "<< a <<endl;
    // cout<< "b = "<< b <<endl;
    // cout<< "After swapPointer"<<endl;
    // swapPointer(&a, &b);
    // cout<< "a = "<< a <<endl;
    // cout<< "b = "<< b <<endl;


    cout<< "a = "<< a <<endl;
    cout<< "b = "<< b <<endl;
    cout<< "After swapReferenceVar"<<endl;
    swapReferenceVar(a, b);
    cout<< "a = "<< a <<endl;
    cout<< "b = "<< b <<endl;

    


    return 0;
}