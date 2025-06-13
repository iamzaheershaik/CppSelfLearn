#include<iostream>
#include<cmath>
using namespace std;
class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    int getLength() {
        return length;
    };
    int getBreadth() {
        return breadth;
    };

    int setLength(int l);
    int setBreadth(int b);
    int area();
    int perimeter();
    int diagonal();
    bool isSquare();
    ~rectangle();
};
int main() {
    rectangle den(10,20);
    cout<<"The Length of Rectangle = "<<den.getLength()<<endl;
    cout<<"The breadth of Rectangle = "<<den.getBreadth()<<endl;
    cout<<"The Area of rectangle = "<<den.area()<<endl;
    cout<<"The Perimeter of Rectangle = "<<den.perimeter()<<endl;
    cout<<"The Diagonal of Rectangle = "<<den.diagonal()<<endl;
    cout<<"Bool Value = "<<den.isSquare()<<endl;
}
rectangle::rectangle() {
    length =1;
    breadth =1;
}
rectangle::rectangle(int l, int b) {
    length = l;
    breadth = b;
}
rectangle::rectangle(rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}
int rectangle::setLength(int l) {
    length = l;
}
int rectangle::setBreadth(int b) {
    breadth = b;
}
int rectangle::area() {
    return length*breadth;
}
int rectangle::perimeter() {
    return 2*(length*breadth);
}
int rectangle::diagonal() {
    return sqrt((length*length) + (breadth*breadth));
}
bool rectangle::isSquare(){
    return length==breadth;
}
rectangle::~rectangle() {
    cout<<"Rectangle Destroyed"<<endl;
}



