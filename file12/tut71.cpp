#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    cout << "Vector In C++ STL" << endl;

    vector<int> vec1;
    int element, size;
    cout<< "Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector <int> ::iterator iter = vec1.begin();
    vec1.insert(iter+3, 400, 599); // iterator, number_of_copies, value
    display(vec1);

    return 0;
}
