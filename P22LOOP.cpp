//  Sum of all digits of a given number

#include <iostream>
using namespace std;

int main() {
int n,sum=0,remainder;                              
cout<<"enter any number: ";
cin>>n;

while (n !=0)
{
    remainder=n%10;
    sum=sum+remainder;
    n /= 10;
}

cout<<"sum of the digits : "<<sum;

return 0;
}