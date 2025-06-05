#include<iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str ="HELLOWOrLD";
    string::iterator it;
    for (it=str.begin(); it!=str.end(); it++){
        if (isupper(*it)){
            *it =tolower(*it);
        }
     }
      cout<<str;
    }
/*
Another condition
if(*it>='A' && *it>='Z')
* */
