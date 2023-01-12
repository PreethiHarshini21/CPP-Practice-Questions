// Decimal to Binary

#include <iostream>
using namespace std;

// int DecimalToBinary(int n)
// {
//     int ans=0;
//     int x=1;
    
//     while (x <= n)
//     {
//         x *= 2;
//     }
       
//     x/=2;

//     while(x>0)
//     {
//         int lastDigit = n/x;             // to bring quotient
//         n -= lastDigit*x;              
//         x/=2;
//         ans = ans*10 + lastDigit;
//     }
//         return ans;
//     }
    
int DecimalToBinary(int n)
{
    int ans=0;
    int x=1;

   while(n>0)
    {
        int y = n%2;            
        ans += x*y;              
        n/=2;
        x*=10;
    }
        return ans;
    }
    
int main(){
int n;
cout<<"enter a number:";
cin>>n;

cout<<DecimalToBinary(n)<<endl;

return 0;
}