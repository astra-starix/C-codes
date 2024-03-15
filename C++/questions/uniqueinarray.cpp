#include <iostream>
using namespace std;
vector<int> v(int n) {
    cin >> n;
    for (int i = 0; i <= n; i++){
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i+1])
        {
            return 0;
        }
        
    }
    return 1;
    
}