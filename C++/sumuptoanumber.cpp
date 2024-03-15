#include<iostream>
using namespace std;

int main(){
    int number;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    for ( int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    cout<<sum;
    
       return 0;
}