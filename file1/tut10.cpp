#include <iostream>

using namespace std;

int main()
{
    // loops

    // For loop
    // for (int i = 0; i <= 100; i++)
    // {
    //     cout<< i<<endl;
    // }

    // While loop
    int i = 0;

    // while (i <= 100)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do-while loop
    // do
    // {
    //     cout<< i<<endl;
    //     i++;
    // } while (i<= 100);

    int mul;
    cout<< "Enter a number to generate multiplication table: ";
    cin>> mul;

    for (int i = 1; i <= 12; i++)
    {
        cout << mul << " X " << i << " = " << i * mul << endl;
    }

    return 0;
}