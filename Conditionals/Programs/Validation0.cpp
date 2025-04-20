#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the Two Numbers";
	cin>>a>>b;
	cout<<"The Value of A :" <<a<<endl;
	cout<<"The Value of B :" <<b<<endl;

	if(b==0){
		cout<<"The Denominater is Zero Can't Divisible"<<endl;
	}
	else{
		c = a/b;
		cout<<"The Value of C : "<<c<<endl;
	}
	return 0;
}