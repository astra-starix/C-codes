#include<iostream>
using namespace std;
int SUM(int arr[] , int n)
{
    if(n == 0)
    return 0;
    if(n == 1)
    return arr[0];
    int remainingSum = SUM(arr + 1 , n - 1);
    int sum = arr[0] + remainingSum;
    return sum;
}
int main()
{
    int arr[5] = {2,5,99,75,4};
    int size = 5;
    int sum = SUM(arr , size);
    cout<<"The sum of array is "<<sum<<endl;
}