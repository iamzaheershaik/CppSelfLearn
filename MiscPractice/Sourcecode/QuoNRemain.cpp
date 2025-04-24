#include <iostream>
using namespace std;

int main(){
	int Div, Divis, Quot, Remain;
	cout<<"Enter The Value of Divident : ";
	cin>>Div;
	cout<<"Enter The Value of Divisor : ";
	cin>>Divis;
	cout<<"The Value of Div :"<<Div<<endl;
	cout<<"The Value of Divis :"<<Divis<<endl;
	if(Div>Divis){
			Quot = Div/Divis;
			Remain = Div%Divis;
			cout<<"The Value of Quotient "<<Quot<<endl;
			cout<<"The Value of Remainder "<<Remain<<endl;
	}else{
		cout<<"The Value of Divisor = "<<Divis<<" Greater Than"<<" The Value of Divident:"<<Div<<endl;
	}
	return 0;
}