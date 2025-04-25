#include <iostream>
using namespace std;

int main(){
	int Age=18, i=0;
	while(i<Age){
		cout<<"Your Are Just "<<i<<" can't  Vote"<<endl;
		i++;
	}
	if(i>=Age){
		cout<<"Your Are "<<Age<<" You are Eligiable to Vote"<<endl;
	}
}