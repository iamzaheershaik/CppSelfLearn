#include<iostream>
#include<cmath>
using namespace std;

typedef int marks;
typedef int rollno;


int main(){
	//m1 and m2 are for storing marks

	marks m1, m2;
	rollno r1, r2;
	cout<<"Enter the student rollno"<<endl;
	cin>>r1;
	cout<<"Enter the marks of student"<<endl;
	cin>>m1;
	cout<<"Enter the student rollno"<<endl;
	cin>>r2;
	cout<<"Enter the marks of student"<<endl;
	cin>>m2;
	cout<<"Marks of "<< r1 << " are " << m1 <<endl;
	cout<<"Marks of "<< r2 << " are " << m2 <<endl;

}