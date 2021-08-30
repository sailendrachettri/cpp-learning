#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}

template <class T>
void SwapNum(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout<< "C++ Function Templates & Function Templates with Parameters"<<endl;

    // cout<< "Avg: "<<funcAverage(2, 5.0)<<endl;
    int x = 1, y = 2;
    cout<< "x = "<<x<<" y = "<<y<<endl;
    SwapNum(x, y);
    cout<< "After SwapNum()"<<endl;
    cout<< "x = "<<x<<" y = "<<y<<endl;

    return 0;
}