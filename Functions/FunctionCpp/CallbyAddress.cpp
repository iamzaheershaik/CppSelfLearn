#include<iostream>
using namespace std;

int swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
}
int main() {
    int x=10,y=25;
    swap(x,y);
    cout<<"After Swap Value x = "<<x<<" "<<"After Swap Value y = "<<y<<endl;
}