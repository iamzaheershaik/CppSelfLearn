#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(int A, int B) {
        setLength(A);
        setBreadth(B);
    }
    Rectangle(Rectangle &C) {
        length =C.length;
        breadth =C.breadth;
    }
    int setLength(int l) {
        if (l>1) {
            return length =l;
        }else {
            cout<<"Give Value -Ve Assigning Default Value to Zero"<<endl;
            return length =1;
        }
    }
    int setBreadth(int b) {
        if (b>1) {
            return breadth =b;
        }else {
            cout<<"Give Value -Ve Assigning Default Value to Zero"<<endl;
            return breadth =1;
        }
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};

int main() {
    Rectangle r1(10,20);
    Rectangle r2(r1);
    cout<<"Length of Rectangle = "<<r1.getLength()<<endl;
    cout<<"breadth of Rectangle = "<<r1.getBreadth()<<endl;
    cout<<"The area of The Rectangle = "<<r1.area()<<endl;
    cout<<"The Perimeter of The Rectangle = "<<r1.perimeter()<<endl;
cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"Length of Rectangle R2 = "<<r2.getLength()<<endl;
    cout<<"breadth of Rectangle R2 = "<<r2.getBreadth()<<endl;
    cout<<"The area of The Rectangle R2 = "<<r2.area()<<endl;
    cout<<"The Perimeter of The Rectangle R2 = "<<r2.perimeter()<<endl;
}