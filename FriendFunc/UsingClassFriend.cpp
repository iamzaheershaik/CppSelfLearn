#include<iostream>
using namespace std;
class your;
class My {
    int Private;
protected:
    int Protected;
public:
    int Public;
    friend your;
    friend void display();
};
class your {
public:
    My m;
    void func() {
        m.Private = 20;
        m.Protected = 40;
        m.Public = 50;
    }

};
void display(){
    your y;
    y.func();
    cout<<"The value of Private ="<<y.m.Private<<endl;
    cout<<"The value of Public = "<<y.m.Public<<endl;
    cout<<"The value of Protected = "<<y.m.Protected<<endl;
}
int main() {
    display();
}
