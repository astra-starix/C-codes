#include<iostream>
using namespace std;
int main()
{
    int ans;
    int arr1[10] = {6,7,4,2,9,1,0,8,5,4};
    int arr2[10] = {4,8,7,0,3,2,9,5,4,8};
    int i;
    while (i < 10)
    {
        int j;
        while(j < 10)
        {
            if(arr1[i] == arr2[j])
            {
                ans = i;
            }
            break;
        }
    }
    cout<<ans;
    
}