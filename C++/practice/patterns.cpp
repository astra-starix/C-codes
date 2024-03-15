/*            *
              **
              ***
              ****
              *****
              */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*              *****
                ****
                ***
                **
                *
                   */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*              *
               **
              ***
             ****
            *****    */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 5 - i; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*              *****
                 ****
                  ***
                   **
                    *
                */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces= 1; spaces <= i - 1; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 6 - i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*                  *
                   * *
                  * * *
                 * * * *
                * * * * *
                  */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 5 - i; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}*/
/*              * * * * *
                 * * * *
                  * * *
                   * * 
                    *
                       */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= i - 1; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 6 - i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}*/
/*              ****
                ****
                ****
                ****
                  */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*              *
                **
                ***
                ****
                *****
                ****
                ***
                **
                *
                   */
/*#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int k = 4; k >= 1; k--)
    {
        for (int l = 1; l <= k; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}*/
/*              *
               * *
              * * *
             * * * *
            * * * * * 
             * * * *
              * * *
               * *
                *      */
/*#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int spaces = 1; spaces <= 5 - i; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int spaces = 1; spaces <= 5 - i; spaces++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}*/
#include <iostream>
using namespace std;
int main()
{
   cout<<"Enter the row size:";
   int n,j,i;
   cin>>n;
   int print_control_x=n;
   int print_control_y=n;
   for(i=1;i<=n;i++)
       {
           for(j=1;j<=n*2;j++)
           {
               if(j==print_control_x||j==print_control_y)
               {
                   cout<<"*";
               }
               else
               {
                 cout<<" ";
               }
           }
           print_control_x--;
           print_control_y++;
           cout<<"\n";
       }
}