#include<iostream>
using namespace std;
bool search(int arr[] , int n , int k)
{
    if(n == 0)
    return false;
    if(arr[0] == k)
    return true;
    else
    {
        bool remaining = search(arr+1 , n - 1, k);
        return remaining;
    }
}
int main()
{
    int arr[5] = {2,5,9,6,8};
    int size = 5;
    int key = 9;
    bool isPresent = search(arr , size , key);
    if(isPresent)
    {
        cout<<"KEY "<<key<<" is present in array "<<endl;
    }
    else
    {
        cout<<"KEY "<<key<<" is not present in array"<<endl;
    }
}