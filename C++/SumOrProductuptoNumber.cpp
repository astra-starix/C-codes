#include<iostream>
using namespace std;
int main(){
    int n, c, sum = 0, pro = 1, s = 0, p = 0;
    cout<<"Enter the n"<<endl;
    cin>>n;
    cout<<"Enter your choice"<<endl;
    cin>>c;
    for (int i = 1; i <= n; i++)
    {
        if (c == 1)
        {
            sum = sum + i;

            s = 1;
        }
        else if (c == 2)
        {
            pro = pro * i;

            p = 1;
        }
        
        
    }
    if (s == 1)
    {
        cout<<sum<<endl;
    }
    else if (p == 1)
    {
        cout<<pro<<endl;
    }
    else{
        cout<< -1 <<endl;
    }
    
    
    
}
