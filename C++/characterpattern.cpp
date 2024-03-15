/*print     ABCD
            ABCD
            ABCD
            ABCD



            ABCD
            BCDE
            CDEF
            DEFG


            A
            BC
            CDE
            DEFG


            E
            DE
            CDE
            BCDE
            ABCDE
            */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char startChar = 'A' + n - 1;
        while (j <= i)
        {
            char ch = startChar + j - 1;
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}           