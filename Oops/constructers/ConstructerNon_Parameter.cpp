#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle() {
        length=1;
        breadth=1;
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
    Rectangle r1;
    cout<<"Length of Rectangle = "<<r1.getLength()<<endl;
    cout<<"breadth of Rectangle = "<<r1.getBreadth()<<endl;
    cout<<"The area of The Rectangle = "<<r1.area()<<endl;
    cout<<"The Perimeter of The Rectangle = "<<r1.perimeter()<<endl;
}
