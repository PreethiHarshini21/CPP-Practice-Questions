// display prime numbers between two intervals  

#include <iostream>
using namespace std;

int main() {

int low,high,i;
bool isPrime=true;

cout<<"enter 2 numbers: ";
cin>>low>>high;

cout<<"\nthe prime numbers between "<<low<<" and "<<high<<" are: "<<endl;

while (low<high)
{
    isPrime=true;

    if (low==0 || low==1)
   {                                             // 0 & 1 are not prime numbers
    isPrime=false;
   }
    else {
    for ( i = 2; i <=low/2; ++i)
    {
        if (low % i== 0)
        {
            isPrime=false;
            break;
        }
    }
}

if (isPrime)

    cout<< low <<" ";
    ++low;
}

return 0;
}



