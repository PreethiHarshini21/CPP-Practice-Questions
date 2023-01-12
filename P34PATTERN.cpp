// Half Pyramid 
                                                                //*  
#include <iostream>                                           //  * *  
using namespace std;                                          //  * * *

int main() {

int n;                             
cout<<"enter no.: ";
cin>>n;

for (int i=0; i<=n; i++)
{
    for (int j=0; j<= i; j++)                       // here i is basically the row number
    {
        cout<<" * ";
    }
   cout<<endl; 
}
return 0;
}