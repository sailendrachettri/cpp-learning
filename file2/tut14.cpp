#include <iostream>

using namespace std;

int main()
{
    cout<< "Pointers Arithmetic and arrays"<<endl;
    int marks[4] = {23, 43, 45, 89};    
    int *p = marks;
    *(p++); // increment by one step

    cout<< "The value of *p is " <<*p<<endl; // first value of an array
    cout<< "The value of *(p+1) is " <<*(p+1)<<endl;
    cout<< "The value of *(p+2) is " <<*(p+2)<<endl;
    cout<< "The value of *(p+3) is " <<*(p+3)<<endl;

    return 0;
}