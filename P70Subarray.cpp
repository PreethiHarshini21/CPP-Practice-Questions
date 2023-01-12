// Subarray v/s Subsequence

// Sum of all subarrays 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter size of data: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];                 
    }

    int curr=0; // initialising curr var as we need to store current sum

    for (int i = 0; i < n; i++)
    {
        curr = 0;   // starting always curr shld be 0
        for ( int j = i; j < n; j++)
        {
            curr += arr[j];
            cout<<curr<<endl;
        }
        
    }
    
    return 0;
}