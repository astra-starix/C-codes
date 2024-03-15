#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout<<" ";
            spaces++;
        }
        int j = 1,var = i;
        while (j <= i)
        {
            cout<<var;
            var++;
            j++;
        }
        int k = 1,r = i, l;
        l = (r - 1)*2;
        while (k < i)
        {
            cout<<l;
            l = l - 1;
            k++;
        }
        
        
        
        cout<<endl;
        i++;
    }
    
    return 0;
}