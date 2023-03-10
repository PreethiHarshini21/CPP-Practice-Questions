// Check if array is sorted

#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if (n==1)                  // base condition  
    {                        
       return true;           // when arr size becomes 1 i.e there is only 1 element then sure shot it is sorted array  
    }
    
    bool restArray = sorted(arr+1,n-1);   //(arr+1)-->pointer passes to the 1st element which was initially before at 0th position & (n-1)->size of array decreases from 1.
    if (arr[0]<arr[1] && restArray)
    {
       return true;
    }
     
}                                             

int main(){
    
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5)<<endl;
    
    return 0;
}