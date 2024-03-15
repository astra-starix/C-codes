#include<iostream>
using namespace std ;
int main(){
    int sum = 0;
    for (int i = 0; i < 10 ; i++)
    {
        int x;
        cout<<"Enter the number"<<endl;
        cin>>x;
        sum = sum + x;
    }
    cout<<"The average value is :"<<sum/10.0<<endl;
    
}
