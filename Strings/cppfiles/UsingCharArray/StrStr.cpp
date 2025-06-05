
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char S[25] ="ZaheerShaik";
    char S1[30] ="Sha";
    strstr(S,S1);
    cout<<"The Word Copy From The S TO S1 "<<strstr(S,S1)<<endl;
}