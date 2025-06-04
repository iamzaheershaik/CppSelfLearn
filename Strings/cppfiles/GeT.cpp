#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char S[25];
    char S1[30];
    cout<<"Enter Your Name"<<endl;
    cin.get(S,25);
    cout<<"Name of First "<<S<<endl;
    cout<<strlen(S)<<endl;

    cin.ignore();
    cout<<"Enter Your Name Again"<<endl;
    cin.get(S1,30);
    cout<<"Name of Second "<<S1<<endl;
    cout<<strlen(S1)<<endl;

}
