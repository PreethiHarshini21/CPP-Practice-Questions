// Program to Check Leap Year

#include <iostream>
using namespace std;

int main() {
int year;
cout<<"enter any year";
cin>>year;

if (year%4==0)
{
    cout<<"yeah a leap year "<<year;
}
else
{
    cout<<"oops! not a leap year "<<year;
}


return 0;
}