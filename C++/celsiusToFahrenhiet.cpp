#include<iostream>
using namespace std;
double func (int a){
    double ans = ((a * 9)/5)+32;
    return ans;
}
int main(){
    int C;
    cout<<"Enter the celsius value"<<endl;
    cin>>C;
    double F = func (C);
    cout<<"The fahrenheit value is : "<< F<<endl;
}