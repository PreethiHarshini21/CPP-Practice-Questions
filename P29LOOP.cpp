// Factors of a number

#include <iostream>
#include<cmath>
using namespace std;

int main() {

int i,n;                             
cout<<"enter any number: ";
cin>>n;

cout<<"Factors of "<< n<<" are: ";

for (int i = 1; i <= n; ++i)
{
    if (n%i==0)
    {
       cout<<i<<""<<endl;
    }
    
}
return 0;
}