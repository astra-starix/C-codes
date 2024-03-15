//types of inheritance

//single inheritance


// #include<iostream>
// using namespace std;


// class animal{
//     public:
//     void sound(){
//         cout<<"sound"<<endl;
//     }

// };

// class dog : public animal{

// };

// int main(){
//     dog d;
//     d.sound();
// }





//multilevel inheritance

// #include<iostream>
// using namespace std;


// class animal{

//     public:
//     void sound(){
//         cout<<"speaking"<<endl;
//     }
// };

// class dog : public animal{
//     public:
//     void sound2(){
//         cout<<"Barking"<<endl;
//     }
// };

// class germanSephard : public dog{
//     public:
//     void sound3(){
//         cout<<"Loud barking"<<endl;
//     }
// };

// int main(){
//     germanSephard g;
//     g.sound();
//     g.sound2();
//     g.sound3();

// }



//multiple inheritance


// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     void sound(){
//         cout<<"speaking"<<endl;
//     }
// };


// class dog{
//     public:
//     void sound2(){
//         cout<<"Barking"<<endl;
//     }
// };


// class lion : public animal , public dog {
//     public :
//     void sound3(){
//         cout<<"Roaring"<<endl;
//     }
// };


// int main(){
//     lion simba;

//     simba.sound();
//     simba.sound3();
//     simba.sound2();
// }


//hierarchical inheritance


// #include<iostream>
// using namespace std;


// class animal{
//     public:
//     void sound(){
//         cout<<"Speaking"<<endl;
//     }
// };


// class dog : public animal{
//     public:
//     void sound2(){
//         cout<<"Barking"<<endl;
//     }
// };


// class lion : public animal {
//     public :
//     void sound3(){
//         cout<<"Roaring"<<endl;
//     }
// };

// int main(){
//     dog d;
//     lion l;
//     d.sound();
//     d.sound2();


//     l.sound();
//     l.sound3();
// }



#include<iostream>
using namespace std;


class a{
    public:
    void func1(){
    cout<<"func 1"<<endl;
    }
};


class d{
    public:
    void func2(){
    cout<<"func 2"<<endl;
    }
};


class b : public a{
    
};


class c : public a , public d{

};


int main(){
    c function;
    d decay;


    function.func1();
    function.func2();

    decay.func2();
}