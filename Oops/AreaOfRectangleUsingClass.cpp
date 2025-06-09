#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }

    int diagonal() {
        return sqrt((length * length) + (breadth * breadth));
    }
};
int main() {
    rectangle r1;
    r1.length =60;
    r1.breadth = 70;
    cout<<"The area of Rectangle = "<<r1.area()<<endl;
    cout<<"The Perimeter of the Rectangle = "<<r1.perimeter()<<endl;
    cout<<"The diagonal of the Rectangle = "<<r1.diagonal()<<endl;

}