#include<iostream>
#include<string>
using namespace std;
string Name = "Zaheer";
int main() {
    string Name = "Reema";
    {
        string Name ="Aeshvi";
        cout<<"NestedName = "<<Name<<endl;
    }

    cout<<"OutofBlock = "<<Name<<endl;
    cout<<"GlobalName = "<<::Name<<endl;
}