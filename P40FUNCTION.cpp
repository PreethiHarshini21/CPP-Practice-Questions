// prime numbers between two given numbers or intervals

#include <iostream> 
#include <cmath> 
using namespace std;   

bool isPrime(int num){                      // this part is basically the function
    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;       // it means its non prime
        }
    }
    return true;               // it means when this for loop completes ,its a prime
}


int main() {

int a,b;                             
cout<<"enter no.: ";
cin>>a>>b;

for (int i=a; i<=b; i++)
{
    if (isPrime(i))                          // here the if condition itself checks if the condition is true
    {
        cout<<i<<endl;                      // if true then prints 
    }
    
}
return 0;
}                                                               
