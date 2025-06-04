#include<iostream>
using namespace std;

int main() {
    int X = 10;
    int *P = &X;
    cout<<X<<endl;
    cout<<&X<<endl;
    cout<<P<<endl;
    cout<<&P<<endl;
    cout<<*P<<endl;

    return 0;
}
