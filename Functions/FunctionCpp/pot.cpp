#include<iostream>
#include<string>
using namespace std;

void max(int A, int B){
    return A>B?A:B;
}
void min(int A, int B){
    return A>B?A:B;
}
int main(){
    void (*fp)(int,int);
    fp = max;
    *fp =(10,20);
    cout<<"The Max Value of Fp = "<<fp<<endl;
    fp = min
    *fp = min(20,60);
    cout<<"The Min Value of Fp = "<<fp<<endl;
}