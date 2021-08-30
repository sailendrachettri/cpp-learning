#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout<< "List In C++ STL"<<endl;

    list<int> list1;
    list<int> list2(7);

    list1.push_back(25);
    list1.push_back(35);
    list1.push_back(52);
    list1.push_back(511);
    list1.push_back(15);

    list<int> :: iterator iter;
    iter = list1.begin();

    cout<< *iter<<endl;
    iter++;
    cout<< *iter<<endl;
    
    return 0;
}