#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle(int l=0, int b=0) {
        length =l;
        breadth =b;
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    void setLength(int l) {
        length=l;
    }
    void setBreadth(int b) {
        breadth=b;
    };
    void area(){
         cout<<length*breadth<<endl;
    }
    void perimeter() {
        cout<<2*(length + breadth)<<endl;
    }
};
class cuboid:public rectangle {
private:
    int height;
public:
    cuboid(int l=0, int b=0, int h=0) {
        height=h;
    }
    int getHeight() {
        return height;
    }
    void setHeight(int h) {
        height=h;
    }
    void volume() {
        cout<<getLength() * getBreadth() * height;
    }
};
int main() {
    rectangle r;
    cuboid c;
    r.setLength(4);
    r.setBreadth(6);
    r.area();
    r.perimeter();
    c.setLength(4);   // or whatever you need
    c.setBreadth(6);
    c.setHeight(20);// 4 * 6 * 20 = 480
    c.setHeight(20);
    c.volume();
}