#include<iostream>
using namespace std;
void swappointer(int* a , int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void swapReferenceVar(int &a , int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  /*int a , b;

  cout<<"Enter the first number : "<<endl;
  cin>>a;
  cout<<"Enter the second number : "<<endl;
  cin>>b;
  cout<<"Before swapping the numbers"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
  a = a + b;
  b = a - b;
  a = a - b;
  cout<<"After swapping the numbers"<<endl<<"a = "<<a<<endl<<"b = "<<b;*/
   
  int a = 4 , b = 5;
  cout<<"The value of a before swapping "<<a<<" and value of b before swapping "<<b<<endl;
  //This will swap the numbers using pointer::
  //swappointer(&a , &b);
  //This will swap the numbers using pointer reference variable::
  swapReferenceVar(a , b);
  cout<<"The value of a after swapping "<<a<<" and value of b after swapping "<<b<<endl;
  
}