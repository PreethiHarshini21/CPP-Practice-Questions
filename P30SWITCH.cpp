//  Simple Calculator to Add, Subtract,Multiply or Divide Using Switch case

#include <iostream>
#include<cmath>
using namespace std;

int main() {

int n1,n2;                             
cout<<"enter 2 numbers: ";
cin>>n1>>n2;

char op;
cout<<"input an operator: ";
cin>>op;

switch (op)
{
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
    cout<<n1-n2<<endl;
    break;
case '*':
    cout<<n1*n2<<endl;
    break;
case '/':
    cout<<n1/n2<<endl;
    break;

default:
    cout<<"enter another operator"<<endl;
    break;
}
return 0;
}