#include<iostream>
using namespace std;
int main(){
    int n,num,r,rev = 0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    num = n;
    while (num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    cout<<"Reverse of the "<<n<<" is "<<rev;
}