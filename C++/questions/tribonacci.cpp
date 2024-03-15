#include<iostream>
using namespace std;
long tribonacci(int n){
    int first = 0, second = 1, third = 1, next;
    cout<<first <<" " <<second <<" "<<third<<" ";
    for (int i = 0; i < n- 2; i++)
    {
        if (n == 1)
        {
            cout<<second;
            continue;
        }
        if (n == 2)
        {
            cout<<third;
            continue;
        }
        next = first + second + third;
        cout<<next<<" ";
        first = second;
        second = third;
        third = next;
        
        
    }
   
}
int main(){
    cout<<"The tribonacci digit at position is "<<tribonacci(4)<<endl;

}
