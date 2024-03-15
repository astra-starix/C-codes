#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    int b = 1;
    while (i<=n)
    {
        int k = 1;
        while (k<=n-i)
        {
            cout<<" ";
            k = k + 1;
        }
        
        b = i;
        int j = 1;
        while (j<=i)
        {
            cout<<b;
            b = b+ 1;
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;
        
    }
    

       return 0;
}