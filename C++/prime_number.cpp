#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int d=2;
   bool divided;
    while (d<n)
    {
        if (n%d==0)
        {
           
            divided = true;
        }
        d =d +1;
    }
    if (!divided)
    {
        cout<<"prime"<<endl; 
    }
    else{
        cout<<"not prime"<<endl;
    }
           return 0;
}
