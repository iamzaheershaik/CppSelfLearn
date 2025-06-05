#include<iostream>
#include<string>
using namespace std;

int main(){
    int count=0;
    string str ="helloworld";
    string::iterator it;
    for (it=str.begin(); it!=str.end(); it++){
        count++;
    }
    cout<<count;
}
