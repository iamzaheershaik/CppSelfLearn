#include <iostream>
using namespace std;

int main(){
	int n, i=0;
	cout<<"Enter the Value of N = ";
	cin>>n;
	do{
		cout<<"The Value of N = "<<n<<"Still Greater Than Value of i = "<<i<<endl;
		i++;
	}
	while(i<n);
	return 0;
}
	
