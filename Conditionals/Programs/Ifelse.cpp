#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter the Age: ";
	cin>>age;
	if(age<12  || age>50){
		cout<<"The Guy is Young"<<endl;
	}
	else{
		cout<<"The Guy is Old"<<endl;
	}
	return 0;
}