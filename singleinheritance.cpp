#include <iostream>
using namespace std;

class Animal{
    // data members and functions 
    public:
    int age;
    int weight;

    // functions
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal {

};

int main(){
    Dog d1;
    d1.speak();
   cout<< d1.age <<endl;;

}