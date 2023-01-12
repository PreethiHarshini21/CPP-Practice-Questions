// Power of a number using pow()

#include <iostream>
#include<cmath>
using namespace std;

int main() {

float base,exponent,result;                             
cout<<"enter respective base and exponent number: ";
cin>>base>>exponent;

result=pow(base,exponent);

cout<<base<<"^"<<exponent<<"="<<result;

return 0;
}