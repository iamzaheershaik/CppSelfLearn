#include<iostream>
using namespace std;

int main(){
	int n, i,t;
	cout<<"Enter the Value of n ";
	cin>>n;


	for(i=1; i<=100; i++){
		cout<<n<<" x "<<i<<" = "<<t<<endl;
		t = n*i;
	}
	return 0;
}