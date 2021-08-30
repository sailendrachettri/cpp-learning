#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Harry
{
public:
    T1 a;
    T2 b;
    Harry(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "The value of a is " << a <<" and the value of b is " << b << endl;
    }
};

int main()
{
    cout << "C++ Templates: Class Templates with Default Parameters" << endl;

    Harry <>h1(10, 2.01); // it uses default datatype 
    // Harry <int, char>h1(10, 'c'); 

    h1.display();


    return 0;
}