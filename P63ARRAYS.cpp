// Finding Max and Min element 

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cout<<"enter the size of array you want";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;                   // getting input of all the array elements that the user wants
    }
    
    int maxNo= INT_MIN;       // INT_MIN basically means the minimum possible value that is present in c++ (way to initialize)
    int minNo= INT_MAX;

    for (int i = 0; i < n; i++)
    {
    //    if (arr[i]>maxNo)
    //    {                         // whenever the value given becomes greater than INT_MIN then max value gets updated
    //       maxNo=arr[i];
    //    }

    //    if (arr[i]<minNo)
    //    {
    //       minNo=arr[i];
    //    }

    // instead of if we can use following

          maxNo= max(maxNo,arr[i]);     
          minNo= min(minNo,arr[i]);     
               
    }

    cout<<maxNo<<" "<<minNo<<endl;
     
    return 0;
}
