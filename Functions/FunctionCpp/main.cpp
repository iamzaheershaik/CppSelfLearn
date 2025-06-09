#include<iostream>
using namespace std;
int *fun() {
    int *p = new int[5];
    for (int i=0; i<5; i++) {
        p[i] =5*i;
    }
    cout<<"Address of P = "<<p<<endl;
    return p;
}
int main() {
   int *q =fun();
    if (q==fun()){
        cout<< "q and fun() has same address"<<endl;
    }else {
        cout<<"q and fun() are not same address"<<endl;
    }
    cout<<"The Address of q = "<<q<<endl;
    for (int i=0; i<5; i++) {
        cout<<"q"<<"["<<i<<"] = "<<q[i]<<endl;
    }
}