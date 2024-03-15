#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
   /* for (int i = 1; i <= n; i++)
    {
      for (int spaces = 1; spaces <= n - i; spaces++)
      {
        cout<<" ";
      }
      for (int star = 1; star <= i; star++)
      {
        cout<<"*";
      }
      for (int dec = 1; dec <=i - 1 ;dec++)
      {
        cout<<"*";
      }
      cout<<endl;
      
      
        
    }*/
    int i = 1;
    while (i <= n)
    {
      int spaces = 1;
      while (spaces <= n - i)
      {
        cout<<" ";
        spaces++;
      }
      
      int j = 1;
      while (j <= i)
      {
        cout<<"*";
        j = j + 1;
      }
      int k = i - 1;
      while (k >= 1)
      {
        cout<<"*";
        k--;
      }
      
      cout<<endl;
      i = i + 1;
      
    }
    
    

       return 0;
}



