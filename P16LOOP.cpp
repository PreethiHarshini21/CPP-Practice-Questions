// Multiplication table of a number

#include <iostream>
using namespace std;

int main() {
int n;                              
cout<<"enter any number: ";
cin>>n;

for (int i =0 ; i <=10; ++i)
{
   cout<<n<<"*"<<i<<"="<<n*i<<endl;
}



return 0;
}