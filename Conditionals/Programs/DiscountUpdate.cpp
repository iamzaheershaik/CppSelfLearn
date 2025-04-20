#include <iostream>
using namespace std;

int main(){
		int PriceOfShirt;
		cout<<"Enter The Price of Shirt: ";
		cin>>PriceOfShirt;

		int PriceOfJeans;
		cout<<"Enter The Price of Jeans: ";
		cin>>PriceOfJeans;

		int PriceOfShoes;
		cout<<"Enter The Price of Shoes: ";
		cin>>PriceOfShoes;

		int TotalAmount = PriceOfShirt + PriceOfJeans + PriceOfShoes;
		cout<<"TotalAmout Of Shopping "<<TotalAmount<<endl;


		float discount= 0.0;
		if(TotalAmount<3000){

			cout<<"Your TotalAmout of Shopping is \u20B9"<<TotalAmount<<" Which Less than 3000 So No Discount on Shopping"<<endl;
		}
		else if(TotalAmount >= 3000 && TotalAmount < 5000){
			discount = TotalAmount*10/100;
			cout<<"Your TotalAmout of Shopping is \u20B9"<<TotalAmount<<" Which is Greater than or equal to the 3000 So you will get 10% Discount That is : \u20B9"<<discount<<" After Discount TotalAmount Would be \u20B9"<<TotalAmount-discount<<endl;
		}
		else{
			discount = TotalAmount*20/100;
			cout<<"Your TotalAmout of Shopping is \u20B9"<<TotalAmount<<" Which is Greater than or equal to the 5000 So you will get 20% Discount That is : \u20B9" <<discount<<" After Discount TotalAmount Would be \u20B9"<<TotalAmount-discount<<endl;		
		}
		return 0;

}