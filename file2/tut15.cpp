#include <iostream>
using namespace std;

// Function Prototypes
// type function_name args 
// int sum(int a, int b); // accetable
int sum(int, int); // accetable

int main()
{
    cout << "Functions and its prototype" << endl;
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter last number: " << endl;
    cin >> num2;

    int res = sum(num1, num2); // actual parameters
    cout << "result is " << res << endl;

    return 0;
}

int sum(int a, int b) // formal parameters (copy of a and b)
{
    int c = a + b;
    return c;
}