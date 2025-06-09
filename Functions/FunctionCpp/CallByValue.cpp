#include<iostream>
using namespace std;

int swap(int a, int b) {
    cout<<"Before Swap Value a = "<<a<<" "<<"Before Swap Value b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b =temp;
    cout<<"After Swap Value a = "<<a<<" "<<"After Swap Value b = "<<b<<endl;

}

int main() {
    int x=10,y=25;
    swap(x,y);
    cout<<"After Swap Value x = "<<x<<" "<<"After Swap Value x = "<<x<<endl;
}
