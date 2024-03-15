#include<iostream>
using namespace std;


class human{
    public:
    float height;
    int weight;
    int age;

    int getage(){
        return age;
    }
    void setage(int a){
        this -> age = a;
    }
    int getheight(){
        return height;
    }

    void setheight(float h)
    {
        this -> height = h;
    }
    int getweight(){
        return weight;
    }

    void setweight(int w)
    {
        this -> weight = w;
    }
};


class male : public human{
    public :
    string colour;

    string getcolour()
    {
        return colour;
    }
    void setcolour(string c){
        this -> colour = c;
    }

};

int main(){
    male sahil;
    sahil.setweight(75);
    sahil.setheight(5.8);
    sahil.setcolour("darkbrown");
    sahil.setage(19);
    cout<<"Height "<<sahil.height<<endl;
    cout<<"weight "<<sahil.weight<<endl;
    cout<<"Colour "<<sahil.colour<<endl;
    cout<<"Age "<<sahil.age<<endl;
}