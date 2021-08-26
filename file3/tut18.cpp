#include <iostream>
using namespace std;

int factorialOfNumber(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorialOfNumber(n - 1);
}

int fibonacciSequence(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacciSequence(n - 1) + fibonacciSequence(n - 2);
    }
}

int main()
{
    cout << "Recursions & Recursive Functions in C++" << endl;
    int num;
    // cout << "Enter a positive number: " << endl;
    // cin >> num;
    // cout << "Factorial of " << num << " is " << factorialOfNumber(num) << endl;
    // int num;

    cout << "Enter a position index: " << endl;
    cin >> num;
    cout << "Value at positon " << num << " is " << fibonacciSequence(num) << endl;

    return 0;
}
