// Bubble Sort

// if arr[i] > arr[i+1] swap them.To place the element in their respective position, we have to do the following operation N-1 times.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of data";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];                 
    }

    int counter=1;
    while (counter < n - 1)
    {
        for(int i=0; i<n-counter; i++){
            if (arr[i]>arr[i+1])
            {
                int temp= arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= temp;
            }
        }
        counter++;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}