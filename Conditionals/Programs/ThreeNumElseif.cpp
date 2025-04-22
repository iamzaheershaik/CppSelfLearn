#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	cout<<"Enter the Three Numbers :";
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<"The Number a is Greater than b and c the Value A = "<<a; 
	}
	else if(b>a&&b>c){
		cout<<"The Number b is Greater than a and c the Value B = "<<b; 
	}
	else{
		cout<<"The Number c is Greater than b and a the Value B = "<<c; 
	}
}