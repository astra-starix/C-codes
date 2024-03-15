#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    //print array
    for (int i = 0; i < n; i++)
    {
        cout<<input[i]<<endl;
    }
    
    int max = input[0];
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
        
    }
    cout<<" Max : "<<max;
}