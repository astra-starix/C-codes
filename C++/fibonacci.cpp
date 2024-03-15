#include<iostream>
bool checknumber(int n){
    int i = 2, n1 = 1, n2 = 1, n3 ;
        while (i <= n)
        {
            n3 = n1 + n2;
            n1 = n2;
            n3 = n2;
            if (n == n3)
            {
                return true;
            }
            i++;       
        }
        return false;
        checknumber(n);
}


