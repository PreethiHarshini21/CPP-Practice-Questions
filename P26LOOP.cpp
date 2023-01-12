// check prime number or not for a given number

#include <iostream>
using namespace std;

int main() {

int i,n;
bool isPrime=true;

cout<<"enter any number: ";
cin>>n;

if (n==0 || n==1)
{                                             // 0 & 1 are not prime numbers
    isPrime=false;
}
else{
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            isPrime=false;
            break;
        }
    }
}

if (isPrime)
{
    cout<<n<<" is a prime number";
}
else{
    cout<<n<<" is not a prime number";
}
return 0;
}