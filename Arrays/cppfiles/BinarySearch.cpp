#include<iostream>
using namespace std;
int main() {
    int a[10] = {15,16,17,18,19,20,21,22,23,24};
    int l=0, h=9, mid, key;
    cout<<"Enter the to Search"<<endl;
    cin>>key;
    while(l<=h){
        mid = (l+h)/2;
        if (key==a[mid]) {
            cout<<"key Found = "<<mid<<endl;
            return 0;
        }else if (key<a[mid]) {
            h=mid-1;
        }else {
            l=mid+1;
        }
    }
    cout<<"Number No Found"<<endl;
}