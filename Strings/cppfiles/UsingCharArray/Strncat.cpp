#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char S[25] =" Good";
    char S1[30] =" Morning";
    strncat(S1, S,4);
    cout<<"The New String After Concatination "<<S1<<endl;
}
