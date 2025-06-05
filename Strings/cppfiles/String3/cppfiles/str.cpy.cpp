#include<iostream>
#include<string>
using namespace std;

int main() {
    string s="HelloWorld";
    char str[30];
    s.copy(str,3);
    str[3]='\0';
    cout<<str<<endl;
    return 0;
}
