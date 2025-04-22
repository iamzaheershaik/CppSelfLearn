#include<iostream>
using namespace std;

int main(){
	int day;
	cout<<"enter the Day no";
	cin>>day;
	switch(day){
	case 1: cout<<"The Day is No is One That is monday";
		break;
	case 2: cout<<"The Day is No is Two That is Tuesday";
		break;
	case 3: cout<<"The Day is No is Three That is wednesday";
		break;
	case 4: cout<<"The Day is No is Four That is Thursday";
		break;
	case 5: cout<<"The Day is No is Five That is Friday";
		break;
	case 6: cout<<"The Day is No is Six That is Saturday";
		break;
	default :cout<<"Its Sunday Dont Disturb me";
	}
}