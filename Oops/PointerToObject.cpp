#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
public:
    int base;
    int height;
     int area() {
        return 0.5*(base * height);
     }
};
int main() {
    Triangle r1;
    Triangle *p;
    p = &r1;
    p->base = 30;
    p->height = 40;
    cout<<"the area of The Triangle = "<<p->area();
}


