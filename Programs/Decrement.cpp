#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//This is Post Increment
	int i = 5;
	int j = i--;
	cout<<"The Value i = "<<i<<endl;
	cout<<"The Value j = "<<j<<endl;
	//Answer Should be k = 4, l = 5

	//This is Pre Increment
	int k = 5;
	int l = --k;
	cout<<"The Value k = "<<k<<endl;
	cout<<"The Value l = "<<l<<endl;
	//Answer Should be k = 4, l = 4

	int x = 5, y=10, z;
	z= x-- * y;
	cout<<"The Value x = "<<x<<endl;
	cout<<"The Value y = "<<y<<endl;
	cout<<"The Value z= "<<z<<endl;
	//First in Here z = x*y
	// Then z becomes z = 50;
	// Then x increment by Plus 1 x-1 = 4
	// Then y remains constant hence y = 10 as same;

	int u = 5, v=10, w;
	w= --u * v;
	cout<<"The Value u = "<<u<<endl;
	cout<<"The Value v = "<<v<<endl;
	cout<<"The Value w= "<<w<<endl;
	// Then u increment by Plus 1 u-1 = 4
	// Then w = u*v = 4*10 = 40;
	// Then y remains constant hence y = 10 as same;
}