#include<iostream>
using namespace std;
int main(){
   int age;
    cout<<"Enter your age"<<endl;
    cin>>age; 
    /*if (age>18)
    {
        cout<<"You are eligible for VOTE"<<endl;
    }
    else if (age<18)
    {
        cout<<"You are not eligible for VOTE"<<endl;
    }*/
    switch (age)
    {
    case 18:
    cout<<"You are 18+"<<endl;
        break;
    
    default:
        break;
    }
    
    
return 0;
}
