// Reverse a given number  

// #include <iostream>
// using namespace std;

// int main() {
// int i,reverse=0;                              
// cout<<"enter any number: ";
// cin>>i;

// while (i>0)
// {
//     reverse=(reverse*10)+i%10;
//     i=i/10;     // also written as i/=10
// }

// cout<<"reversed number : "<<reverse;

// return 0;
// }

// Also be written as

#include <iostream>
using namespace std;

int main() {
int n,reverse=0,remainder;                              
cout<<"enter any number: ";
cin>>n;

while(n != 0) {
remainder = n%10;
reverse=reverse*10 + remainder;
n /= 10;
}

cout<<"reverse number : "<<reverse;

return 0;
}