// Half Pyramid after 180 rotation
                                                                //    *  
#include <iostream>                                            //   * *  
using namespace std;                                          //  * * *

int main() {

int i,j,n,b;                             
cout<<"enter no.: ";
cin>>n;

for (int i=1; i<=n; i++)
{
    for (int b=1; b<=n-i; b++)                       // here i is basically the row number
    {
        cout<<" ";
    }
    for (int j = 1; j <=i; j++)
    {
      cout<<"*";
    }
    cout<<endl; 
}
return 0;
}



