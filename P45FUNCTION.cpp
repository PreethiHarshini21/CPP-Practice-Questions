// Check pythogorian triplet


#include <iostream>
using namespace std;

bool check(int x,int y,int z)               
{
    int a=max(x,max(y,z));             // max of x,y,z is stored in a
    int b,c;

    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }

    if (a*a==b*b+c*c)
    {
        return true;
    } else{
        return false;
    }
    
    
}

int main(){
int x,y,z;
cout<<"enter 3 numbers:";
cin>>x>>y>>z;

if (check(x,y,z))
{
    cout<<"Pythogorian Triplet";
}else{
    cout<<"Not a Pythogorian triplet";
}

 return 0;
}