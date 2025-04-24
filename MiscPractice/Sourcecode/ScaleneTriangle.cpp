#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a ,b ,c, Area, S, Perimeter;
	cout<<"Enter the First Side of Scalene Triangle :";
	cin>>a;
	cout<<"Enter the Second Side of Scalene Triangle :";
	cin>>b;
	cout<<"Enter the Third Side of Scalene Triangle :";
	cin>>c;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;

	if(a>0 && b>0 && c>0){
		if(a!= b && b!=c && c!=a){
				if(a < b+c && b < a+c && c < a+b){
					S = (a+b+c)/2;
					cout<<"The Value of S = "<<S<<endl;
					Area = sqrt(S*(S-a)*(S-b)*(S-c));
					Perimeter = a+b+c;
					cout<<"The Area of Triangle :"<<Area<<endl;
					cout<<"The Perimeter of Triangle :"<<Perimeter<<endl;
					return 0;
					}else{
						cout<<"Does Not Satify Rules of Scalene Triangle"<<endl;
					}
				}else {
					cout<<"You Have Equal Values To The Scalene Triangle"<<endl;
				}
			}else{
				cout<<"The Values of The Scalene Triangle Can't be Negative"<<endl;
			}
}