#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;

    Harry(T a)
    {
        data = a;
    }

    void display(void);
};

template <class T>
void Harry<T>:: display(void)
    {
        cout << "data = " << data << endl;
    }

void func(int a){
    cout<< "I am first func "<<a<<endl;
}

template <class T>
void func(T a){
    cout<< "I am first templatised func "<<a<<endl;
}

int main()
{
    cout << "Member Function Templates & Overloading Template Functions in C++ " << endl;
    // Harry<float> h(2.32);
    // h.display();

    func(4); // it search for exact match function, if found then it calls that function else calls templatisied function
    return 0;
}