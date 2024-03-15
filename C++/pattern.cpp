/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
   {
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j = j + 1;
            
        }
        
        cout<<endl;
        i = i + 1;
        
    }*/






 /*   #include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    

   int k = 1;
   while (i<=n)
   {
    int j = 1;
    while (j<=i)
    {
        cout<<k<<" " ;
    
    j = j + 1;
    k = k + 1;
    }
    cout<<endl;
    i = i + 1;
   }
   
    


       return 0;
}*/




#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    int k = 1;
    while (i<=n)
    {
        int l = 1;
        while (l <= n - i)
        {
            cout<<" ";
        l = l + 1;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<k;
            j = j + 1;
            k = k + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    

       return 0;
}