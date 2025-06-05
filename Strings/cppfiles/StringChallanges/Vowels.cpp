#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "How    are   you   My   Friend!!!";
    int vowels = 0, consonants = 0, spaceCount = 0;

    for (int i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if (ch == ' '){
            spaceCount++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Spaces: " << spaceCount << endl;
    cout << "Consonants: " << consonants << endl;
}
