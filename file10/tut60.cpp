#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout<< "\nFile I/O in C++: Reading and Writing Files\n"<<endl;

    // opening file using constructor and writing it
    // string st = "Sailendra Chettri";
    // ofstream out("sample60.txt");
    // out<<st;

    // opening file using constructor and reading from it
    string st2;
    ifstream in("sample60.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    return 0;
}
