// Function overloading
// Polymorphism

#include<iostream>
using namespace std;

class A {
    public:
    void name(){
        cout<<"Name is Aquib Aftab"<<endl;
    }
    void name(string name){
        cout<<"Name is "<<name<<endl;
    }
    void name(int n){
        cout<<n<<endl;
    }
};

int main(){
    A a1;
    a1.name(2);
}