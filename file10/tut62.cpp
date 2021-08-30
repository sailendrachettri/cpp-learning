#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "\nFile I/O in C++: open() and eof() functions\n"
         << endl;

    // ofstream out;
    // out.open("sample60.txt");
    // out << "This is me\n";
    // out << "This is me 2\n";
    // out << "This is me 3\n";
    // out.close();

    ifstream in;
    string st;
    in.open("sample60.txt");
    in >> st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st<<endl;
    }

    return 0;
}