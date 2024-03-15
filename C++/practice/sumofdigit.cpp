#include<iostream>
using namespace std;
int main(){
    int n,a,sum = 0,num;
    cin>>n;
    num = n;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    cout<<"Sum of digits of "<<num<<" is "<<sum;
}