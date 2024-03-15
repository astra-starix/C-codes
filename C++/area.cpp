#include<iostream>
using namespace std;
int area_circle(int r){
    int area = 3.14*r*r;
    return area;
}
int main(){
    int r;
    cout<<"Enter the value of radius:"<<endl;
    cin>>r;
    area_circle(r);
    cout<<"area of circle is = "<<area_circle(r);
    return 0;
}