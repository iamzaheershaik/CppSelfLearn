#include<iostream>
using namespace std;

int main() {
    string s1="Hello";
    string s2=" World";
    cout<<s1+s2<<endl;
    s1.resize(50);
    cout<<s1.capacity();
}