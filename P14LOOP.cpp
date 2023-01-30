// Sum of first N natural numbers

#include <iostream>
using namespace std;

int main() {
int n,sum=0;                              // additive identity concept applies here=>(0+1=1)
cout<<"enter any number: ";
cin>>n; //input the number required

for (int i =1 ; i <=n; i++)
{
    sum+=i; //add the induvidual number to variable sum in each iteration
}
cout<<"sum= "<<sum;


return 0;
}
