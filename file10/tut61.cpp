#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // cout<< "File I/O in C++: Read/Write in the Same Program & Closing Files"<<endl;

    // string name;
    // ofstream out("sample60.txt"); 
    // cout<< "Enter your name: ";
    // cin>>name;

    // out<<"My name is " + name;
    // out.close();

    ifstream in("sample60.txt");
    string content;
    in>>content;

    cout<< "The content of this file is\n"<<content<<endl;
    in.close();



    
    

    return 0;
}