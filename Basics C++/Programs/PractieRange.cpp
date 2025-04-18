#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;

int main(){

	cout<<"===============This is Boolean=============="<<endl;
	// boolean Size
	bool a;
	cout << "bool:- "<<sizeof(a)<<"byte"<<endl;
	int b = (sizeof(a) * 8);
	cout << "So Bool Has " << b <<"Bits"<<endl;

	cout<<"===============This is Int=============="<<endl;

	// int Size and Range for Signed and Unsigned included
	int c;
	cout << "int:- "<<sizeof(c)<<"byte"<<endl;
	int d = (sizeof(c) * 8);
	cout << "So Int Has " << d <<"Bits"<<endl;
	cout<<"Range of Int: "<<INT_MIN<< " TO " << INT_MAX << endl;
	cout<<"Range of Unsigned Int 0 TO   " <<UINT_MAX<<endl;
    

	cout<<"===============This is Short=============="<<endl;

    //short Size and Range for Signed and Unsigned included
	short int e;
	cout << "Short int:- "<<sizeof(e)<<"byte"<<endl;
	int f = (sizeof(e) * 8);
	cout << "So Short Int Has " << f <<"Bits"<<endl;
	cout<<"Range of Short Int: "<<SHRT_MIN<< " TO " << SHRT_MAX << endl;
	cout<<"Range of Unsigned Short Int 0 TO   " <<USHRT_MAX<<endl;

	cout<<"===============This long =============="<<endl;
	long int g;
	cout << "long int:- "<<sizeof(g)<<"byte"<<endl;
	int h = (sizeof(g) * 8);
	cout << "So Long Int Has " << h <<"Bits"<<endl;
	cout<<"Range of Long Int: "<<LONG_MIN<< " TO " <<LONG_MAX << endl;
	cout<<"Range of Unsigned Long Int 0 TO   " <<ULONG_MAX<<endl;

	cout<<"===============This long =============="<<endl;
	long long int i;
	cout << "long long int:- "<<sizeof(i)<<"byte"<<endl;
	int j = (sizeof(i) * 8);
	cout << "So Long Long Int Has " << j <<"Bits"<<endl;
	cout<<"Range of Long Long Int: "<<LLONG_MIN<< " TO " <<LLONG_MAX << endl;
	cout<<"Range of Unsigned Long  Long Int 0 TO   " <<ULLONG_MAX<<endl;
   
   	//char Size and Range for Signed and Unsigned included

	cout<<"===============This char =============="<<endl;
	char k;
	cout << "Char:- "<<sizeof(k)<<"byte"<<endl;
	int l = (sizeof(k) * 8);
	cout << "Char Has " << l <<"Bits"<<endl;
	cout<<"Range of Char: "<<CHAR_MIN<< " TO " <<CHAR_MAX << endl;
	cout<<"Range of Unsigned Char 0 TO   " <<UCHAR_MAX<<endl;

	//float Size and Range for Signed and Unsigned included
    cout<<"===============This float =============="<<endl;
    float m;
	cout << "float:- "<<sizeof(m)<<"byte"<<endl;
	int n = (sizeof(m) * 8);
	cout << "float Has " << n <<"Bits"<<endl;
	cout<<"Range of float: "<<FLT_MIN<< " TO " <<FLT_MAX << endl;
	cout<<"Precision of float:   " <<FLT_DIG<<" DIGITS"<<endl;

	//double Size and Range for Signed and Unsigned included
	cout<<"===============This double =============="<<endl;
	double o;
	cout << "double: "<<sizeof(o)<<"byte"<<endl;
	int p = (sizeof(o) * 8);
	cout << "double Has " << p <<"Bits"<<endl;
	cout<<"Range of double: "<<DBL_MIN<< " TO " <<DBL_MAX << endl;
	cout<<"Precision of double:   " <<DBL_DIG<<" DIGITS"<<endl;

	//double Size and Range for Signed and Unsigned included
	cout<<"===============This Long double =============="<<endl;
	long double q;
	cout << "long double: "<<sizeof(q)<<"byte"<<endl;
	int r = (sizeof(q) * 8);
	cout << "long double Has " << r <<"Bits"<<endl;
	cout<<"Range of Long double: "<<LDBL_MIN<< " TO " <<LDBL_MAX << endl;
	cout<<"Precision of Long double:   " <<LDBL_DIG<<" DIGITS"<<endl;
}