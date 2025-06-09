#include<iostream>
using namespace std;


class rectangle {
public:
    float radius;
    float CircleArea() {
        return 3.14F*(radius*radius);
    }
    float CirclePerimeter() {
        return 2*3.14F*radius;
    }
};

int main() {
    rectangle *ptr = new rectangle;
    ptr->radius = 22.5;
    cout<<"The Area of Circle = "<<ptr->CircleArea()<<endl;
    cout<<"The Perimeter of Circle = "<<ptr->CirclePerimeter()<<endl;
}
