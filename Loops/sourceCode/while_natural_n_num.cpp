#include <iostream>
using namespace std;

int main(){
	long int i=1, n, sum=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	while(i<=n){
		sum+= i;
		i++;
	}
	cout<<"the Sum of N Natural Numbers"<<sum<<endl;
}