#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int num = 1;
        while (num <= (n - i) + 1)
        {
            cout<<num;
            num++;
        }
        int stars = 1;
        while (stars <= (i - 1) * 2)
        {
            cout<<"*";
            stars++;
        }
        int j = n - i + 1;
        int k = 1;
        while (k <= n - i + 1)
        {
            cout<<j;
            j--;
            k++;
        }
        cout<<endl;
        i++;
        
        
    }
    
}