#include<iostream>
#include<string>
using namespace std;

int main(){
    string str ="How are You My Friend Reema Patel";
    int vowels=0, consonents=0, spaces=0, i;
    for (i=0; str[i]!='\0'; i++){
        if (str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'||
         str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowels++;
         }
         else if (str[i]==' '){
         spaces++;
         }
         else{
         consonents++;
         }
    }
    cout<<vowels<<endl;
    cout<<spaces<<endl;
    cout<<consonents<<endl;
}
