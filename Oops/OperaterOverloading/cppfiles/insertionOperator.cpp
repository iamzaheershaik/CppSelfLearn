#include<iostream>
using namespace std;

class complex {
private:
    int real;
    int img;
public:
    complex(int r=0,int i=0) {
        real =r;
        img=i;
    }
    friend complex operator+(complex x, complex y);
    friend ostream& operator<<(ostream& out, complex z);
};
complex operator+(complex x, complex y){
    complex temp;
    temp.real =x.real+y.real;
    temp.img =x.img+y.img;
    return temp;
}
ostream& operator<<(ostream& out, complex z) {
    out<<z.real<<"+i"<<z.img;
    return out;
}
int main() {
    complex c1(2,3), c2(3,7);
    complex c3;
    c3=c1+c2;
    cout << c3 << endl;
    return 0;
}