#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b) {
    return a>b?a:b;
}
int main() {
    cout<<maxim(12,3)<<endl;
    cout<<maxim(12.2f, 12.90f)<<endl;
    cout<<maxim(98.3, 68.45)<<endl;
}
