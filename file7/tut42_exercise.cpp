#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;

public:
    void setValue(void)
    {
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
    }
    void simpleOperation(void)
    {
        cout << "\nThe sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl<<endl;
    }
};

class ScientificCalculator : public SimpleCalculator
{
public:
    void scientificOperation(void)
    {
        setValue();
        simpleOperation();
        
        cout << "\nThe sin() of " << num1 << " is " << sin(num1) << " and " << num2 << " is " << sin(num2) << endl;
        cout << "The cos() of " << num1 << " is " << cos(num1) << " and " << num2 << " is " << cos(num2) << endl;
        cout << "The tan() of " << num1 << " is " << tan(num1) << " and " << num2 << " is " << tan(num2) << endl;
    }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    HybridCalculator calc;
    calc.scientificOperation();

    return 0;
}