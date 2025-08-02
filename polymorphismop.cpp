#include<iostream>
using namespace std;

class B{

    public:
    int a,b;

    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        cout<<"My name is Aquib"<<endl;
    }
    void operator() (){
        cout<<"I am a bracket"<<endl;
    }
};

int  main(){
        B obj1, obj2;
        obj1.a=2;
        obj1.b= 4;
        obj2.a =3;
        
        obj1+obj2;
        obj1();
}