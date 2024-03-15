#include <iostream>
using namespace std;
int n,digit;
int ans = 0;
int main(){
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (n != 0)
    {
            digit = n % 10;
    ans = ans * 10 + digit;
    }
    
    

    cout<<ans;
}
