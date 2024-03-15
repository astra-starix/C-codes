/*print      1
             12
             123
             1234


             1
             23
             345
             5678



             1
             23
             456
             78910



             1
             21
             321
             4321
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
        int j = 1;
        int k = i;
        while(j <= i){
            cout<<k;
            k = k - 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    
    return 0;
}            