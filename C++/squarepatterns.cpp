/*we have to print 1111
                   2222
                   3333
                   4444
                   
                   
                   1234
                   1234
                   1234
                   1234
                   
                   
                   4321
                   4321
                   4321
                   4321*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
       int j = 1;
       int k = 1;
       while (j <= n)
       {
        cout<<n - j + 1;
        j = j + 1;
        k = k + 1;
       }

       cout<<endl;
       i = i + 1;
    }
        return 0;
    
}  

                 