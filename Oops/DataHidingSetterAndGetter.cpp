#include<iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
public:
    int setLength(int l) {
        if (l>=0) {
            return length =l;
        }else {
            cout<<"The Value Assign To Length is Negative so By default 0 is Assigned As length"<<endl;
            return 0;
        }
    }
    int setBreadth(int b) {
        if (b>=0) {
            return breadth =b;
        }else {
            cout<<"The Value Assign To Length is Negative so By default 0 is Assigned As breadth"<<endl;
            return 0;
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
    rectangle R;
    R.setLength(16);
    R.setBreadth(8);
    cout<<"The Value of Length ="<<R.getLength()<<endl;
    cout<<"The Value of Breadth = "<<R.getBreadth()<<endl;
    cout<<"The Area of Rectangle = "<<R.area()<<endl;
}
