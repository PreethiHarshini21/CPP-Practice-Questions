// Convert Binary to Decimal


#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
     while (n>0)
     {
        int y=n%10;          // getting last digit val
        ans +=x*y;           // x is basically denoting 2^0,2^1....  
        x *=2;               // updating x
        n /= 10;             // to neglect decimal part and the second part becomes the last digit
     }
     return ans;
     
}
// int binaryToDecimal(int n)
// {
//     int i=0;
//     int ans=0;
//      while (n>0)
//      {
//         int y=n%10;          
//         ans +=y*pow(2,i);             
//         i++;               
//         n /= 10;             
//      }
//      return ans;
     
// }
    
int main(){
int n;
cout<<"enter a number:";
cin>>n;

cout<< binaryToDecimal(n)<<endl;

 return 0;
}