// To check Armstrong number or not
// it is basically the sum of the cubes of the given no. whose result will be same as the given no.
// eg:153= 1^3+5^3+3^3= 153

#include <iostream>
#include<cmath>
using namespace std;

int main() {

int n=0,num,originalNum,remainder,power,result=0;                             
cout<<"enter any number: ";
cin>>num;

originalNum=num;

while (originalNum!=0)
{
    originalNum /= 10;
    ++n;
}

originalNum=num;

while (originalNum !=0)
{
    remainder=originalNum %10;                    // pow() returns a double value
    power=round(pow(remainder,n));                // round() returns the equivalent int
    result+=power;
    originalNum /=10;
}

if (result==num)
{
    cout<<num<<" Armstrong number";
}
else{
    cout<<num<<" not an Armstrong number";
}

return 0;
}


