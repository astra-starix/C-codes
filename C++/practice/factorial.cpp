#include <iostream>
using namespace std;
int fac(int n){
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}
int main(){
    int n;
    cout<<"Enter the n :"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fac(n);
}