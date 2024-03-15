#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int lowercaseVowel,uppercaseVowel;
    lowercaseVowel = (c == 'a'|| c =='e'|| c == 'i'|| c == 'o'|| c == 'u');
    uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercaseVowel||uppercaseVowel)
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else{
        cout<<c<<" is a consonant"<<endl;
    }
}