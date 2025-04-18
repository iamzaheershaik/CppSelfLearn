#include<iostream>
using namespace std;
 
enum day{mon=65,tue,wed=80,thu,fri,sat,sun};

int main(){
	day d;
	d=fri;
	cout<<"The Value Mon = "<<mon<<endl;
	cout<<"The Value Tue = "<<tue<<endl;
	cout<<"The Value Wed = "<<wed<<endl;
	cout<<"The Value Thu = "<<thu<<endl;
	cout<<"The Value Fri = "<<fri<<endl;
	cout<<"The Value Sat = "<<sat<<endl;
	cout<<"The Value Sun = "<<sun<<endl;
	return 0;
}