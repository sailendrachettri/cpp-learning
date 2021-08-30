#include <iostream>
using namespace std;

class Test
{
    int  a, b; // order matters here

public:
    // Test(int i, int j): a(i),b(j){
    // Test(int i, int j): a(i),b(i+j){
    // Test(int i, int j) : b(j), a(i+b) // this will create problem because a was initallize first
    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor executec" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    cout << "\nInitialization list in Constructors in Cpp\n"
         << endl;
    Test t(1, 20);

    return 0;
}