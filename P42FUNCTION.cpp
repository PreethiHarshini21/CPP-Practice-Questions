// fibonacci series

#include<iostream>
using namespace std;

void fib(int n){                   // here void becaz we are not asking func and neither returning anything
    int t1=0;
    int t2=1;
    int nextTerm;

    for (int i = 1; i <=n; i++)
    {
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}


int main(){
   
    int n;
    cin>>n;

    fib(n);             // calling a function i.e function call

    return 0;
}