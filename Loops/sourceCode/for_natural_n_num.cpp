#include <iostream>
using namespace std;

int main(){
	long int i, n, sum=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	for(i=0; i<=n; i++){
		sum += i;
	}
	cout<<"The Sum of N Numbers "<<sum<<endl;
}