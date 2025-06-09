#include<iostream>
using namespace std;
string Name;
int length(){
    cout<<"Enter the Name of Friend"<<endl;
    getline(cin,Name);
    cout<<"Name of Your Friend is "<<Name<<endl;
    cout<<"length of the string = "<<Name.length()<<endl;
    cout<<"Capacity Before Resize of the string = "<<Name.capacity()<<endl;
    Name.resize(20);
    cout<<"Capacity After Resize of the string = "<<Name.capacity()<<endl;
}
int main() {
    string x;
    x=length();
}
