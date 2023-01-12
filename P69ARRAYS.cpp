// MAX TILL i
// Given an array a[] of size n. For every i from 0 to n-1 | output max(a[0], a[1],..., a[i]).

#include<iostream>
using namespace std;

int main(){

    int mx = -1999999;                 // we r giving vry small value becaz we got to maximize at every step.
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);        // updating mx variable
        cout<<mx<<endl;
    }
    
return 0;
}

