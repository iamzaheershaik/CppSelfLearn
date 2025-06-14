#include<iostream>
using namespace std;

int main() {
    int count=55;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (count%2==0) {
                cout<<count<<" ";
            }else {
                cout<<"--"<<" ";
            }
            count--;
        }
        cout<<endl;
    }
}
