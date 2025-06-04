#include<iostream>
using namespace std;

int main() {
    int A[5] {2,4,6,7,8};
    int *P =A, *Q = &A[3];
    cout<<"The Distance Between the Two Pointers "<<Q-P<<endl;
    return 0;

}
