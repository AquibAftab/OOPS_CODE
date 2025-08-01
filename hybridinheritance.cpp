# include<iostream>
using namespace std;

class Animal{
    public:
    int color;

    public:
    void bark(){
        cout<<"Animal is Barking"<<endl;
    }
};

class Human{
    public:
    int age;

    public:
    void speak(){
        cout<<"Human is speaking"<<endl;
    }

};

class Hybrid : public Animal, public Human{

};


int main(){
    Hybrid h;
    h.bark();
    h.speak();
}
