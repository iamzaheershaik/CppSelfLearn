#include<iostream>
#include<string>
using namespace std;

int search(int a[], int n, int key) {
    for (int i=0; i<n; i++) {
        if (key==a[i]) {
            return i;
        }
    }
}



int main() {
    int A[] = {1,2,4,66,77,88,56};
    int k;
    cout<<"Element to be Searched"<<endl;
    cin>>k;
    int index = search(A, 7, k);
    cout<<"The index of Searched Element = "<<index<<endl;
}