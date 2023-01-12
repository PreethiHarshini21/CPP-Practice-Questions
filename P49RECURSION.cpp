//  Calculating n raised to power p

#include <iostream>
using namespace std;

int Power(int n, int p)
{

if (p==0)
{
    return 1;
}

   int prevPower=Power(n,p-1);
   return n*prevPower; 
}

int main(){
int n,p;
cout<<"enter numbers:";
cin>>n>>p;

cout<<Power(n,p)<<endl;

return 0;
}