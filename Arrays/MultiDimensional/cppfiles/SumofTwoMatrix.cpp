#include<iostream>
using namespace std;
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int C[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            C[i][j]=A[i][j]*B[i][j];
        }
        cout<<endl;
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}