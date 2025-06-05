#include<iostream>
#include<string>
using namespace std;

int main() {
    string str ="When Life Gives You Tangerines";
    cout<<str.find_first_of('i')<<endl;
    cout<<str.find_first_of('i',12 )<<endl;
return 0;
}
