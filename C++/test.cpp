/* to print     1
               212
              32123
             4321234
        */
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
        int j = i;
        while (j > 0)
        {
            cout<<j;
            j--;
        }
        int k = 2;
        int l = 1;
        while (l <= i - 1)
        {
            cout<<k;
            k++;
            l++;
        }
        cout<<endl;
        i++;
        
    }
    
}