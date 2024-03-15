#include<iostream>
using namespace std;
int fun(int a , int b){
    static int c = 0;
    c = c + 1;
    return a * b + c;

    
}
int main(){
    int a , b;
    cout<<"Enter the number a and b"<<endl;
    cin>>a>>b;
    cout<<"The product is "<<fun(a , b)<<endl;
    cout<<"The product is "<<fun(a , b)<<endl;
    cout<<"The product is "<<fun(a , b)<<endl;
    cout<<"The product is "<<fun(a , b)<<endl;

}



