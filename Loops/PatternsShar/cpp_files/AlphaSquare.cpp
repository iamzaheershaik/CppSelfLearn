#include<iostream>
using namespace std;

int main(){
    int i , j, rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=0; i<rows; i++){
        char ch ='A';
        for(j=0; j<rows; j++){
            cout<<ch<<" ";
            ch = ch+1;
        }
        cout<<endl;

    }
}