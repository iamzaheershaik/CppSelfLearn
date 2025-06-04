#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char S[25] ="ZaheerShaik";
    char S1[30] ="";
    strncpy(S1, S,5);
    cout<<"The Word Copy From The S TO S1 "<<S1<<endl;
}