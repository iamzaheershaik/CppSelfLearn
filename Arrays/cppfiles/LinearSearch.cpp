#include<iostream>
using namespace std;

int main() {
    int a[10], n=10,key;
    cout<<"Enter the Elements in Array "<<endl;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"enter the Element to search"<<endl;
    cin>>key;
    for (int i=0; i<n; i++) {
        if (key==a[i]) {
            cout<<"Key Found = "<<i<<endl;
            return 0;
        }
    }
    cout<<"key Not Found"<<endl;
}
