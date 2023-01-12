// GCD or hcf of two numbers

#include<iostream>
using namespace std;

int HCF(int n1,int n2)
{
    if (n2>0)
    {
       return HCF(n2, n1 % n2);
    }
    else
       return n1; 
   
    
}

int main(){

int n1,n2;
cout<<"enter numbers:";
cin>>n1>>n2;

cout<<HCF(n1,n2)<<endl;

    return 0;
}