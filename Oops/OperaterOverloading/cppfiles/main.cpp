#include <iostream>
using namespace std;

class complex {
private:
    int real;
    int img;
public:
    complex(int r = 0, int i = 0) {
        real = r;
        img  = i;
    }

    // fixed spelling of "operator"
    complex operator+(complex x) {
        complex temp;
        temp.real = real + x.real;
        temp.img  = img + x.img;
        return temp;
    }

    // a simple print function (using what you've learned)
    void display() {
        cout << real << " + " << "i" << img << endl;
    }
};

int main() {
    complex c1(2, 4);
    complex c2(5, 5);
    complex c3;
    c3 = c1 + c2;
    c3.display();  // prints the result
    return 0;
}

