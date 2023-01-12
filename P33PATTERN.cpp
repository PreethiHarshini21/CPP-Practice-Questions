// Inverted Half Pyramid
                                                                //* * * 
#include <iostream>                                           //  * *  
using namespace std;                                          //  * 

int main() {

int n;                             
cout<<"enter no.: ";
cin>>n;

for (int i=n; i>=1; i--)
{
    for (int j=1; j<= i; j++)                       // here i is basically the row number
    {
        cout<<" * ";
    }
   cout<<endl; 
}
return 0;
}

