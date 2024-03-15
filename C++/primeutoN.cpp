#include<iostream>
using namespace std;
bool prime(int n){
    int a = 2;
    while (a < n)
    {
        if (n % a == 0)
        {
            return false;
        }
        a++;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int x = 2; x < n; x++)
    {
        if (prime(x))
        {
            cout<< x << endl;
        }
        
    }
    
}