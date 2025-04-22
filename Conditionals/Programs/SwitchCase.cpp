#include<iostream>
using namespace std;

int main(){
	int day;
	cout<<"enter the Day no : ";
	cin>>day;
	switch(day){
	case 1: cout<<"The Day is No is One That is monday"<<endl;
		break;
	case 2: cout<<"The Day is No is Two That is Tuesday"<<endl;
		break;
	case 3: cout<<"The Day is No is Three That is wednesday"<<endl;
		break;
	case 4: cout<<"The Day is No is Four That is Thursday"<<endl;
		break;
	case 5: cout<<"The Day is No is Five That is Friday"<<endl;
		break;
	case 6: cout<<"The Day is No is Six That is Saturday"<<endl;
		break;
	default :cout<<"Its Sunday Dont Disturb me"<<endl;
	}
}