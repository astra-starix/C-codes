#include<iostream>

// for same name of function we use scope resolution to execute the particular function
using namespace std;


class a{
    public :
    void func(){
        cout<<"func1"<<endl;
    }
};


class b{
    public :
    void func(){
        cout<<"func2"<<endl;
    }
};


class c : public a , public b {
    
};


int main(){
    c obj;

    obj.a::func();
    obj.b::func();
}