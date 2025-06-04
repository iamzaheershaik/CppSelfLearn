#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the Size of Elements="<<endl;
    cin>>size;
    int *p=new int[size];


    delete []p;
    cout<<"Enter the New Size"<<endl;
    cin>>size;
    p=new int[size];

    return 0;
}
