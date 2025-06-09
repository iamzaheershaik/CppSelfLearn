#include<iostream>
using namespace std;
int *data(int size) {
    int *q = new int[size];
    for (int i=0; i<5; i++){
        q[i] = 6*i;
    }
    return q;
}
int main() {
    int *p = data(5);
    for (int i=0; i<5; i++) {
        cout<<p[i]<<endl;
    }
}
