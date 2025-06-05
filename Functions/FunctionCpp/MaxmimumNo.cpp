#include<iostream>
using namespace std;
int max(int a, int b, int c) {
    if (a>b&& a>c) {
       return a;
    }else if (b>c && b>a) {
       return b;
    }else {
       return c;
    }
}

int main() {
    int x=1000,y=700,z=100,U;
    U=max(x, y, z);
    cout<<U;
    return 0;
}

