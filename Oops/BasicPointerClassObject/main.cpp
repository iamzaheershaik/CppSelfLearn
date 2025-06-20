#include<iostream>
using namespace std;
class Base {
public:
    void fun1(){
        cout<<"This is Base Fun"<<endl;
    }

};
class Derived:public Base {
public:
    void fun2() {
        cout<<"This is Derived"<<endl;
    }

};
int main() {
    Derived p1;
    Base *ptr =new Derived();
    ptr->fun1();
}
