#include <iostream>
using namespace std;

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b){
        data1 = a,
        data2 = b;
    }

    void display()
    {
        cout<< this->data1 <<", "<< this->data2 << endl;
    }
};

int main()
{
    cout << "C++ Templates: Templates with Multiple Parameters" << endl;

    myClass <int, float>obj(1, 1.9);
    obj.display();

    return 0;
}