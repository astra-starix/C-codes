#include<iostream>
using namespace std;


class student{
    private :
    int marks;
    public :
    char grade;

    int getmarks(){
        return marks;
    }
    char getgrade(){
        return grade;
    }

    void setmarks(int m){
        marks = m;
    }
    void setgrade(char g){
        grade = g;
    }

};
int main(){
    //static allocation
    student sahil;

    //dynamically allocation
    student *s = new student;
    s -> setmarks(89);
    s -> setgrade('C');
    cout << "marks is "<<s -> getmarks()<<endl;
    cout << "grade is "<<s -> getgrade()<<endl;

    // sahil.setmarks(69);
    // sahil.setgrade('B');
    // cout<<"The obtained marks is "<<sahil.getmarks()<<endl;
    // cout<<"The grade obtained by the student is "<<sahil.getgrade()<<endl;
    // sahil.setmarks(89);
    // cout<<"The obtained marks is "<<sahil.getmarks()<<endl;
    // cout<<sahil.marks<<endl;
    // cout<<sizeof(sahil.grade)<<endl;
    // cout<<sizeof(sahil)<<endl;
    // cout<<sizeof(sahil.marks)<<endl;
}