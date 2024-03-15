/*print     *
           **
          ***
         ****

         ****
         ***
         **
         *
         */
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n )
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout<<" ";
            spaces = spaces + 1;
        }
        //int stars = 1;
        //while (stars <= n - i + 1)
        //{
        //    cout<<"*";
        //    stars =stars+1;
        //}
        int j = 1,var = i;
        while (j <= i)
        {
            cout<<var;
            j++;
            var++; 
        }
        int m = 1, l , r = i;
        l = (r - 1)*2;
        while (m < i)
        {
            cout<<l;
            l--;
            m++;
        }
        
        

        cout<<endl;
        i = i + 1;
        
    }
    
    
}