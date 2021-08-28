#include <iostream>
using namespace std;

// forward declearation of class c2;
class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "" << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << "" << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int
main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    oc2.inData(55);

    oc1.display();
    oc2.display();
    cout<< "After swaped"<<endl;
    exchange(oc1, oc2);
    oc1.display();
    oc2.display();

    return 0;
}