#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int* b = &a;
    int** c = &b;
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of a is "<<b<<endl;
    cout<<"The value at address of b is "<<*b<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
}