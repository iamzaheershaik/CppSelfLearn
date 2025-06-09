#include<iostream>
using namespace std;
int & ref(int &a) {
    return a;
}


int main() {
    int x = 10;
    ref(x)=45;
    cout<<"The Value of x = "<<x<<endl;
}
