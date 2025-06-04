#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string One;
    string Two;
    cout<<"Enter Your Name"<<endl;
    cin.getline(One);
    cout<<"Name of First "<<One<<endl;
    cout<<strlen(One)<<endl;

    cout<<"Enter Your Name Again"<<endl;
    cin.getline(Two);
    cout<<"Name of Second "<<Two<<endl;
    cout<<strlen(Two)<<endl;

}
