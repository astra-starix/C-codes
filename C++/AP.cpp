#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cout << "Enter the x" << endl;
    cin >> x;
    for (int i = 1, count = 0; count < x; i++)
    {
        int s;
        s = (3 * i) + 2;
        if (s % 4 != 0)
        {
            cout << s << " ";
            count++;
        }
    }
}