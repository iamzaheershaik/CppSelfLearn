#include <iostream>
using namespace std;

int main(){
	float R, CircleArea , Circumference;
	cout<<"Enter the Radius of Circle :";
	cin>>R;
	CircleArea = 3.14 * R * R; 
	Circumference = 2 * 3.14 * R;
	cout<<"The Area of The Circle "<<CircleArea<<endl;
	cout<<"The Area of The Circumference "<<Circumference<<endl;
}