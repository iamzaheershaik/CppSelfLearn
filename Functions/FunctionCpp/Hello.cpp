#include<iostream>
using namespace std;

void display() {
    string str="Zaheer shaik";
    cout<<"The Length of Given = "<<str.length()<<endl;
    string str2="Mohammed Faizan";
    cout<<"The Name after Replacement "<<str2.replace(10,5,"Jasmine")<<endl;
    str2.swap(str);
    cout<<str<<endl<<str2;
}
int main() {
    display();
    return 0;
}
