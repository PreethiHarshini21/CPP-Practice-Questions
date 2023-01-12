// POLYMORPHISM

// function overloading

#include<iostream>
using namespace std;

class student{
    public:

    void func(){
        cout<<"I am a function with no arguments"<<endl;
    }

    void func(int x){
        cout<<"I am a function with int arguments"<<endl;
    }

    void func(double x){
        cout<<"I am a function with double arguments"<<endl;
    }
};

int main(){
    student obj;
    obj.func();
    obj.func(4);
    obj.func(6.2);
    
    return 0;
}