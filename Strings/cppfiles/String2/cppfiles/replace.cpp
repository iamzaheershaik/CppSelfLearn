#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "GameOfClans";
    str.replace(6,5,"Thrones");
    cout<<str;
}