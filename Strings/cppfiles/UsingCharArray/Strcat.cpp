#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char S[25] ="Good";
    char S1[30] =" Morning";
    strcat(S, S1);
    cout<<"The New String After Concatination "<<S<<endl;
}