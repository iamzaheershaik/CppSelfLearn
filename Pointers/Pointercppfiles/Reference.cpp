#include<iostream>
using namespace std;

int main(){
    int x=10;
    int &y=x;
    cout<<x<<endl;
    y++;
    cout<<y<<endl;
    cout<<"The Address of x "<< &x<<endl<<" The Address of y "<<&y<<endl;

}
