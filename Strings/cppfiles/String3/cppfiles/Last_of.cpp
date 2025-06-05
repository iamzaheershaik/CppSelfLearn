#include<iostream>
#include<string>
using namespace std;

int main() {
    string str ="When Life Gives You Tangerines";
    cout<<str.find_last_of('i')<<endl;
    cout<<str.find_last_of('i',25 )<<endl;
    // cout<<str.length()<<endl;
    // cout<<"Capacity Before increase = "<<str.capacity()<<endl;
    // str.resize(50);
    // cout<<"Capacity After increase = "<<str.capacity()<<endl;
    return 0;
}
