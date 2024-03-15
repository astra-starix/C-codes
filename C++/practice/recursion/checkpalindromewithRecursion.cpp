#include<iostream>
using namespace std;
bool checkPalindrome(string& name , int i , int j)
{
    if(i > j)
    return true;
    if(name[i] != name[j]){
    return false;
    }
    else{
    return checkPalindrome(name , i + 1, j - 1);
    }
}
int main()
{
    //upper case and lower case are considered as different char
    string name = "Saahaah";
    bool isPalindrome = checkPalindrome(name , 0 , name.length() - 1);
    if(isPalindrome){
    cout<<"It's a Palindrome"<<endl;
    }
    else{
    cout<<"It's not a Palindrome"<<endl;
    }
}