#include<iostream>
using namespace std;
int add(int a, int b) {
    return a+b;
}
int add(int k, int l, int m) {
    return k+l+m;
}
float add(float n, float o, float p) {
    return n+o+p;
}
    int main() {
        int x=10, y=20,z,w;
        z=add(x, y);
        cout<<"The Value of Z After Sum of X+Y = "<<z<<endl;
        w=add(x,y,z);
        cout<<"The Value of W After Sum of k+l+m = "<<w<<endl;
        float E=20.5,F=20.9,G=14.5, H;
        H=add(E,F,G);
        cout<<"The Value of H after the Sum of the E+F+G = "<<H<<endl;
    }
