#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value fo num1: "; // '<<'This is called insertion operator
    cin>>num1; // '>>' This is called Extraction operator
    cout<<"Enter the value fo num2: "; 
    cin>>num2;

    cout<< "The sum is " << num1 + num2;

    return 0;
}