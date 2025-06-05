#include<iostream>
using namespace std;

int add(int x, int y) {
    int z;
    z = x+y;
    return z;
}
int main() {
    int a=15,b=19,c;
    c=add(a,b);
    cout<<"Sum is "<<c;
    return 0;
}

