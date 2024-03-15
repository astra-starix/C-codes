#include<iostream>
using namespace std;

int main(){
    int n, sum_of_even = 0, sum_of_odd = 0, r;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    while (n>0)
    {
        r = n % 10;
        if (n % 2 == 0)
        {
            sum_of_even = sum_of_even + r;
        }
        else {
            sum_of_odd = sum_of_odd + r;
        }
     n = n / 10;
        
    }

    cout<<"Sum of Even digit:"<<sum_of_even<<endl;
    cout<<"Sum of Odd digit:"<<sum_of_odd<<endl;
    

       return 0;
}