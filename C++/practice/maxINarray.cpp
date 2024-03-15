#include<iostream>
using namespace std;
int max(int arr[],int n)
{
    int max = INT_MIN;
    for(int i =  0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin>>size;
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"max value is"<<max(arr,size);
    
}