#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);

int main()
{
    cout << "Function Overloading with Examples in C++" << endl;

    cout<< "The sum of 10 and 20 is "<< sum(10, 20)<<endl;
    cout<< "The sum of 10, 20 and 30 is "<< sum(10, 20, 30)<<endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}