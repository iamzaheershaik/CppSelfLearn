#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a,b,c,d,r1,r2;
	cout<<"Enter the Three Numbers: ";
	cin>>a>>b>>c;
	cout<<"The value a: "<<a<<"The value of b: "<<b<<"The value of c: "<<c<<endl;
	d = b*b-4*a*c;
	r1=((-b+sqrt(d))/(2*a));
	r2=((-b-sqrt(d))/(2*a));

	if(d==0){
		cout<<"The roots are real and equal"<<endl;
		cout<<(-b/(2*a));
	}
	else if(d>0){
		cout<<"The roots are real and unequal"<<endl;
		cout<<"The rool r1 : "<<r1<<endl;
		cout<<"The rool r2 : "<<r2<<endl;
	}
	else{
		cout<<"The roots are imaginary"<<endl;
		cout<<"The rool r1 : "<<r1<<endl;
		cout<<"The rool r2 : "<<r2<<endl;
	}
}