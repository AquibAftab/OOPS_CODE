#include<iostream>
using namespace std;

class Human {
    //initialising data members
    public:
    int height;
    public:
    int weight;
    int age;
    
    // initilaising data function in public mode

    void setheight(int h){
        this->height = h;
    }
    void setweight(int wt){
        this->weight = wt;
    }
  
    void setage(int a){
        this->age = a;
    }
    
    int show_height(){
        return this->height;
    }
    int show_weight(){
        return this->weight;
    }
    
    int show_age(){
        return this->age;
    }
};

// now adding derived class or child class
class Male : public Human{
    // adding an additional property of male in public mode
    public:
    string color;
    // data functions

    public:
    void sleep(){
        cout<< "MAN Is sleeping \n ";
    }
    int getheight(){
        return this->height;
    }
    int getweight(){
        return this->weight;
    }
};
int main(){
    Male obj1;
    // obj1.setheight(175);
    // obj1.setweight(67);
    // obj1.setage(21);

    cout<< obj1.getheight()<<"\n";
    cout<< obj1.getweight()<<"\n";
    //cout<< obj1.show_weight()<<"\n" ;
    obj1.sleep();

}