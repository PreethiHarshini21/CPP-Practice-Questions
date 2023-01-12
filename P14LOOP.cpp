// Sum of first N natural numbers

#include <iostream>
using namespace std;

int main() {
int n,sum=0;                              // additive identity concept applies here=>(0+1=1)
cout<<"enter any number: ";
cin>>n;

for (int i =1 ; i <=n; i++)
{
    sum+=i;
}
cout<<"sum= "<<sum;


return 0;
}