// // Power of a number without using pow()

#include <iostream>

using namespace std;

int main() {

int exponent;
float base,result=1;          

cout<<"enter respective base and exponent number: ";
cin>>base>>exponent;

cout<<base<<"^"<<exponent<<"=";

while (exponent !=0)
{
    result=result*base;
    --exponent;
}

cout<<result;

return 0;
}