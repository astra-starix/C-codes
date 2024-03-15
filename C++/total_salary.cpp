#include<iostream>
using namespace std;

int main(){
    int Basic , allow;
    char grade;
    double hra, da, pf;
    cout<<"Enter your basic salary:"<<endl;
    cin>>Basic;
    cout<<"Enter your grade: "<<endl;
    cin>>grade;
    hra = 0.2 * Basic;
    da = 0.5 * Basic;
    pf = 0.11 * Basic;
    if (grade == 'A')
    {
        allow = 1700;
    }
    if (grade == 'B')
    {
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    int total_salary;
    total_salary = ((Basic + allow + hra + da) -( pf));
    cout<<"The total salary is: "<<endl<< total_salary;
           return 0;
}