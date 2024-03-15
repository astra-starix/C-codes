#include<iostream>
using namespace std;

int main() {
	// Write your code here
    long int n,sumo=0,sume=0,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        if(n%2==0)
        {
            sume=sume+r;
        }
        else
        {
            sumo=sumo+r;
        }
        n=n/10;
    }
    cout<<sume<<" "<<sumo;
}