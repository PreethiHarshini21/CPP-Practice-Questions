// BINARY SEARCH

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0;        // s--> starting point
    int e=n;       // e--> ending point

    while (s<=e)
    {
        int mid=(s+e)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)           // if key is less than mid i.e key present in 1st half
        {                                 
            e=mid-1;                    
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter size of data";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;                   // getting input of all the array elements that the user wants
    }

    int key;
    cout<<"enter a value as key";
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;
    
    return 0;
}

