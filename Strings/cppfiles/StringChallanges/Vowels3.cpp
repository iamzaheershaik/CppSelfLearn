#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "How are you   My Friend!!";
    string vowelsList = "AEIOUaeiou";
    int vowels = 0, consonants = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if (ch == ' '){
            spaces++;
        }
        else if (isalpha(ch)) { // check if it’s a letter
            if (vowelsList.find(ch) != string::npos) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Consonants: " << consonants << endl;
}
