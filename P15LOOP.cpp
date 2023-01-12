// Factorial of a number

#include <iostream>
using namespace std;

int main() {
int n, factorial=1;
cout<<"enter any number: ";
cin>>n;

if (n<0)
{
    cout<<"Factorial doesn't exist";
}
else
{
    for (int i = 1; i <= n; ++i)
{
    factorial*=i;
}
}
cout<<"the factorial is "<<factorial ;

return 0;
}