#include <iostream>
using namespace std;

int main(){
	int Year;
	cout<<"Enter the Year: ";
	cin>>Year;

	if(Year%4 == 0 ){

		if(Year%100 == 0){

			 if (Year%400 == 0){
			 	cout<<Year<<": The Year is Leap Year"<<endl;
			 }else{
			 	cout<<Year<<": The Year is Not Leap Year"<<endl;
			 }
		} else{
			cout<<Year<<": The Year is Leap Year"<<endl;
		}
	}else{
		cout<<Year<<": The Year is Not a Leap Year"<<endl;
	}
	return 0;
}