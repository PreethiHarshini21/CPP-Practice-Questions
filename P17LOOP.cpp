// Fibonacci series upto nth term

#include <iostream>
using namespace std;

int main() {
int n,t1=0,t2=1,nextTerm=0;          //fibonacci series: 0 1 1 2 3 5.....

cout<<"enter the number of terms: ";
cin>>n;

for (int i =1 ; i <=n; ++i)
{
   if (i==1)
   {
      cout<<t1<<",";
      continue;
   }

   if (i==2)
   {
      cout<<t2<<",";
      continue;
   }
   nextTerm=t1+t2;
   t1=t2;
   t2=nextTerm;

   cout<<nextTerm<<",";
   
}

return 0;
}