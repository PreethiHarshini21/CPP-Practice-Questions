// Full Pyramid 
                                                               // *  
#include <iostream>                                           //  * *  
using namespace std;                                          // * * *

int main() {

int n,i,j,b;                             
cout<<"enter no.: ";
cin>>n;

for (int i=1; i<=n; i++)
{
    for (int b=1; b<=n-i; b++)                       // here i is basically the row number
    {
        cout<<" ";
    }

    for (int j = 1; j <= 2*i-1; j++)
    {
        cout<<" * ";
    }
    cout<<endl; 
}
return 0;
}