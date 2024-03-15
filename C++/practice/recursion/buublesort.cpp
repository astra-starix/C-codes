#include<iostream>
using namespace std;
// void bubblesortArray(int arr[] , int n)
// {
//     if(n == 0 || n == 1)
//     {
//         return;
//     }
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] > arr[i + 1])
//         {
//             swap(arr[i] , arr[i + 1]);
//         }
//     }
//     sortArray(arr , n - 1);
// }
void selectionSort(vector<int>& arr, int n, int index)
{   
    if(index == n - 1)
    {
        return;
    }
    int minindex = index;
    for(int j = index + 1; j < n; j++)
    {
        if(arr[j] < arr[minindex])
        {
            minindex = j;
        }
    }
    swap(arr[index], arr[minindex]);
    selectionSort(arr, n, index + 1);
}
int main()
{
    void selectionSort(vector<int>& arr, int n)
    {
        int i = 0;
        selectionSort(arr, n, i);
    }
}