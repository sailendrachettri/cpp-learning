#include <iostream>
using namespace std;

class BankDeposite
{
    int principal, years;
    float interestRate, returnValue;

public:
    BankDeposite(){};
    BankDeposite(int p, int y, float r); // r = floating pont value like 0.04
    BankDeposite(int p, int y, int r);   // r = integer pont value like 10, 30, 20..
    void show(void);
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
}

BankDeposite ::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposite::show(void)
{
    cout << "Principle amount was " << principal
         << " .Return value after " << years
         << " is " << returnValue << endl;
}

int main()
{
    cout<< "\nDynamic Initialization of Objects Using Constructors\n"<<endl;

    BankDeposite bd1, bd2, bd3;
    int p, y, R;
    float r; 

    // cout<< "Enter the value of p, y and r "<<endl;
    // cin>> p>>y>>r;
    // bd1 = BankDeposite(p, y, r);
    // bd1.show();

    // cout<< "Enter the value of p, y and R "<<endl;
    // cin>> p>>y>>R;
    // bd2 = BankDeposite(p, y, R);
    // bd2.show();

    // bd3.show();
    return 0;
}