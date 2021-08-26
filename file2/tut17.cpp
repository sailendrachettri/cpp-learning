#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return a * b;
}

int moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main() 
{
    cout << "Inline Functions, Default Arguments & Constant Arguments in C++ " << endl;

    // int a, b;
    // cout << "Enter the value of a and b: " << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is: " << product(a, b) << endl;
    int money = 100000;
    cout<< "If you have "<<money<<" rs in you bank account, you will receive "<<moneyReceived(money)<< " rs after 1 year."<<endl;
    cout<< "For VIP: If you have "<<money<<" rs in you bank account, you will receive "<<moneyReceived(money, 1.1)<< " rs after 1 year."<<endl;

    return 0;
}