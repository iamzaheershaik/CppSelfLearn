#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, Area;
	cout<<"The Value of a = ";
	cin>>a;
	cout<<"The Value of a is  "<<a<<endl;

	if(a>0){
		Area = sqrt(3) * a * a * 0.25;
		cout<<"The Area of Equilateral Triangle = "<<Area<<endl;
	}else{
		cout<<"The Value of Can't be a Negative Number "<<endl;
	}
}