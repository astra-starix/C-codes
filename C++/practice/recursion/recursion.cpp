#include<iostream>
using namespace std;
/*int fac(int n){
    if (n <= 1)
    {
        return 1;
    }
    
    return n * fac(n-1);
}*/
int fib(int a){
    if (a < 2)
    {
        return 1;
    }
    
    return fib(a - 1) + fib(a - 2);
}
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The term of fibonacci sequence at "<<a<<"th position is "<<fib(a);
}