// Check Whether Number is Even or Odd

// #include <iostream>
// using namespace std;

// int main() {
// int a;
// cout<<"enter the value: ";
// cin>>a;

// if (a%2==0)
// {
//     cout<<"the given value is even ";
// }
// else
// {
//     cout<<"the value is odd";
// }

// return 0;
// }

// using TERNARY OPERATOR

#include <iostream>
using namespace std;

int main() {
int a;
cout<<"enter the value: ";
cin>>a;

(a%2==0)? cout<< a <<" is even": cout<< a <<" is odd";

return 0;
}