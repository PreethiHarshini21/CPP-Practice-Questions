// Fibonacci series upto certain number n

#include <iostream>
using namespace std;

int main() {
int n,t1=0,t2=1,nextTerm=0;          //fibonacci series: 0 1 1 2 3 5.....

cout<<"enter a positive number: ";
cin>>n;

cout<<"Fibonacci series: "<<t1<<","<<t2<<",";

nextTerm=t1+t2;
 
while (nextTerm<=n)
{
   cout<<nextTerm<<",";         //*********

   t1=t2;
   t2=nextTerm;
   nextTerm=t1+t2;

   
}

return 0;
}