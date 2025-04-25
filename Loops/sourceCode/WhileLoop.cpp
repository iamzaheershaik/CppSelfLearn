#include <iostream>
using namespace std;

int main(){
	int n, i=0;
	cout<<"Enter the Value of N = ";
	cin>>n;
	while(i<=n){
		cout<<"The Value of N = "<<n<<"Still Greater Than Value of i = "<<i<<endl;
		i++;
	}
	if(i>n){
		cout<<"The Value of i = "<<i<<" Greater Than Value of n = "<<n<<endl;
	}else{
		cout<<"Characters Cant ne Assign"<<endl;
	}
	return 0;
}