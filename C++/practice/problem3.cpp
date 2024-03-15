#include<iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int spaces = 1; spaces <= 3 - row; spaces++)
        {
            cout<<" ";
        }
        for (int column = 1; column <=  (2 * row) - 1; column++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int row = 2; row >= 1; row--)
    {
        for (int spaces = 1; spaces <= 3 - row; spaces++)
        {
            cout<<" ";
        }
        for (int column = 1; column <= 2*row - 1; column++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
}