// Inverted Full Pyramid
                                                             //  * * * 
#include <iostream>                                           //  * *  
using namespace std;                                          //   * 

int main() {

int n,i,j;                             
cout<<"enter no.: ";
cin>>n;

for (int i=n; i>=1; i--)
{
    for (int j=0; j<=n-i; j++)                       // here i is basically the row number
    {
        cout<<"  ";
    }

    for (int j = i; j <=2*i-1; j++)
    {
        cout<<" * ";
    }

    for (int j = 0; j < i-1; j++)
    {
        cout<<" * ";
    }
    
    cout<<endl; 
}
return 0;
}

