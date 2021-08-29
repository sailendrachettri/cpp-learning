#include <iostream>
using namespace std;

/*
For a protected member: 
                        Public derivation       Private derivation       Protected derivation
1. Private members:       Not Inherited           Not Inherited            Not Inherited
2. Protected members:     protected               Private                  Protected
3. Public members:        Public                  Private                  Protected
*/

class Base{
    protected: // mix of both public and private - private variable but it can be inherinted
    int a;

    private:
    int b;
};

class Derived: protected Base{

};

int main()
{
    cout<< "Protected Access Modifier"<<endl;
    Base b;
    Derived d;

    return 0;
}