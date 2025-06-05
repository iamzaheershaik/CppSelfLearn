#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1="Hello";
    string str2="World";
    cout<<str1.compare(str2);
    //depends Upon Asccii Values of letters
    /*
     When S1 compared s2;
     if str1 ="H"
     and str2 ="W"
     the Ascii value of the H is less than the W the Output Negative Value;

    if str1 ="W"
     and str2 ="W"
     the Ascii value of the W is equal than the W the Output Zero Value;

    if str1 ="h"
     and str2 ="W"
     the Ascii value of the h is greater than the W the Output Positive  Value;
     */
}