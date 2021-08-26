#include <iostream>

using namespace std;

int main()
{
    cout<< "Hello World"<<endl;    
    for(int i = 0; i< 10; i++){
        if(i == 4){
            // continue;
            break;
        }
        cout<< i <<endl;
    }

    return 0;
}