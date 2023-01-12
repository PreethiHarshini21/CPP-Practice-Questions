// CONSTRUCTORS

#include<iostream>
using namespace std;

class student{

    //string name;   it is in private to access this we can use set func
    public:
    string name;
    int age;
    bool gender;

    // default constructor
    student(){
        cout<<"default constructor"<<endl;
    }

    // parameterised constructor
    student(string s, int a, int g){
        cout<<"parameterised constructor"<<endl;
        name=s;               
        age=a;
        gender=g;
    }

    // copy constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;               
        age=a.age;
        gender=a.gender;
    }

    // destructors(parameters cannot be passed and cant be return)

    ~student(){
        cout<<"destructor called"<<endl;

    }

    // void setName(string s){            // setter function
    //     name=s;
    // }

    // void getName(){            // get function
    //     cout<<name<<endl;
    // }

    void printInfo(){

        cout<<"name: ";
        cout<<name<<endl;
        cout<<"age: ";
        cout<<age<<endl;
        cout<<"gender: ";
        cout<<gender<<endl;

    }

    // operator overloading

    bool operator == (student &a){
        if (name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
            return false;
    }


};

int main(){

    student a("preethi",20,1);
    // a.printInfo();

    student b;
    student c=a;

    if (c==a)
    {
        cout<<"same"<<endl;
    } else
        cout<<"not same";
    
    
    return 0;
}