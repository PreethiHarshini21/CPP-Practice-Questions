#include <iostream>
using namespace std;

int main(){
    int a=3,b=2,temp;

    cout<<"the nos. are :"<<endl;
    cout<<a<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;

    cout<<"the swapped value is :"<<endl;
    cout<<a<<b;
    

    return 0;
}

