// LINEAR SEARCH

#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
           
    }
     return -1;           // here v r putting becaz even after traversing the entire for loop if key not found then return -1
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

    cout<<linearSearch(arr,n,key)<<endl;
    
    return 0;
}