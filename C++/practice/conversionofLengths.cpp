#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter the value of inches"<<endl;
    cin>>n;
    cout<<"(1) inches into yards"<<endl<<"(2) inches into feet"<<endl<<"(3) inches into cms"<<endl;
    cout<<"Choose your choice"<<endl;
    int a;
    cin>>a;
    if (a == 1)
    {
        cout<<n<<" inches is equal to "<<n/36<<" yards"<<endl;
    }
    else if (a == 2)
    {
        cout<<n<<" inches is equal to "<<n/12<<" feets"<<endl;
    }
    else if (a == 3)
    {
        cout<<n<<" inches is equal to "<<n*2.54<<" cms"<<endl;
    }
    else{
        cout<<"YOU ENTERED WRONG INPUT"<<endl;
    }
}