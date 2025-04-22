# include<iostream>
using namespace std;

int main(){
	cout<<"menu\n";
	cout<<"1.Addition\n"<< "2.Subraction \n" <<"3.Multiplication\n"<<"4.Division\n";

	int option;
	cout<<"enter the choice: ";
	cin>>option;
	int a,b,c;
	cout<<"Enter the Value of A = ";
	cin>>a;
	cout<<"Enter the Value of B = ";
	cin>>b;
	switch(option){
	case 1:c=a+b;
		break;
	case 2:c=a-b;
		break;
	case 3:c=a*b;
		break;
	case 4:c=a/b;
		break;
	default: cout<<"invalid Operands";
	}
	cout<<"result = "<<c<<endl;
	return 0;
}

