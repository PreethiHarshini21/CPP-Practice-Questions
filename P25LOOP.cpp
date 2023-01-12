// Palindrome number - reversed number should be same as original one

#include <iostream>
using namespace std;

int main() {

int n,num,digit,rev=0;

cout<<"Enter any number: ";
cin>>num;

n=num;
do
{                                    
    digit = num%10;                            // initially we are actually reversing the given number
    rev = rev*10 + digit;
    num /= 10;

} while (num!=0);
{
 cout<<"the reverse of your number is: "<<rev<<endl;         // here checking the palindrome condition

   if (n==rev)
   {
    cout<<"the reversed number is a palindrome";
   }
   else{
    cout<<"It is not a palindrome";
   
}
}
return 0;
}