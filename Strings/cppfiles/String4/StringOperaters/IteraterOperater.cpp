#include<iostream>
using namespace std;

int main() {
    string str ="hello";
    string::iterator it;
    for (it=str.begin(); it!=str.end(); it++) {
      *it=*it-32;
    }
    cout<<str;
}
