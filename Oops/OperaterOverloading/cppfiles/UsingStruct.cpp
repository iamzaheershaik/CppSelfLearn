#include<iostream>
using namespace std;
//the diffrence between struct and classes is struct are by default public and classes are default private;
struct complex {
    int real;
    int imag;
    complex operator+(complex x) {
        complex temp;
        temp.real =real+x.real;
        temp.imag =imag+x.imag;
        return temp;
    }
    void display() {
        cout<<"The Sum of Complex Numbers = "<<real<<"+"<<"i"<<imag<<endl;
    }
};
int main() {
    complex c1,c2,c3;
    c1.real = 12, c1.imag=14;
    c2.real = 16, c2.imag=23;
    c3 = c1+c2;
    c3.display();

}
