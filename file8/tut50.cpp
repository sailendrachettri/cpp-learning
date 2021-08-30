#include <iostream>
using namespace std;

int main()
{
    cout << "\nRevisiting Pointers: new and delete Keywords in CPP\n"
         << endl;

    // int a = 9;
    // int *ptr = &a;
    // cout<< "a = "<<a<<endl;
    // cout<< "&a = "<<&a<<endl;
    // cout<< "ptr = "<<ptr<<endl;
    // cout<< "*prt = "<<*ptr<<endl;

    // new Keyword
    // int *p = new int(40);
    // float *p = new float(4.30);
    // cout<< "*p = "<<*p<<endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // cout<< "arr[0] = "<<arr[0]<<endl;
    // cout<< "arr[1] = "<<arr[1]<<endl;
    // cout<< "arr[2] = "<<arr[2]<<endl;

    // new 'delete' keyword 

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 40;
    arr[2] = 30;

    // delete[] arr; // free-up the dynamically allocated array

    cout<< "arr[0] = "<<arr[0]<<endl;
    cout<< "arr[1] = "<<arr[1]<<endl;
    cout<< "arr[2] = "<<arr[2]<<endl;


    return 0;
}