#include<iostream>
using namespace std;

int length(){
    string s;
    cout<<"Enter the Name of Friend"<<endl;
    getline(cin,s);
    cout<<"length of the string = "<<s.length()<<endl;
}

int main() {
    string x;
    x=length();
    cout<<x;
}

