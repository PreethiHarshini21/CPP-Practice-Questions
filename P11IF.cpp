// Largest among 3 nos.


#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout<<"enter 3 values";
cin>>a>>b>>c;

if (a>=b&& a>=c)
{
    cout<<"the largest number is "<<a;
}
else if (b>=a&&b>=c)
{
    cout<<"the largest number is "<<b;
}
else
{
    cout<<"the largest number is "<<c;
}

return 0;
}