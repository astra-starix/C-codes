#include<iostream>
using namespace std;

class student {
    private :
    string name;
    int marks;
    int age;

    public :
    string getname(){
        return name;
    }
    void setname(string name){
        this -> name = name;
    }
    int getmarks(){
        return marks;
    }
    void setmarks(int marks){
        this -> marks = marks;
    }
    int getage(){
        return age;
    }
    void setage(int age){
        this -> age = age;
    }
};


int main(){
    student chutiya;

    chutiya.setname("Rahul");
    chutiya.setmarks(69);
    chutiya.setage(21);


    cout<<"Name is "<<chutiya.getname()<<endl;
    cout<<"Marks is "<<chutiya.getmarks()<<endl;
    cout<<"Age is "<<chutiya.getage()<<endl;
}