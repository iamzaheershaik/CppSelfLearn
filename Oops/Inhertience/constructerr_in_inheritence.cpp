#include<iostream>
using namespace std;
class base {
public:
    base() {
        cout<<"Not a Parmout"<<endl;
    }
    base(int x) {
        cout<<"parout of x ="<<x<<endl;
    }
};
class Derived:public base {
public:
    Derived(){
        cout<<"Parmout"<<endl;
    }
    Derived(int y){
        cout<<"Derived Parmount = "<<y<<endl;
    }
    Derived(int x, int y):base(x){
        cout<<"Derived Parmount = "<<y<<endl;
    };


};
int main() {
    Derived b(510,10);
}