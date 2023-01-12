// First and Last occurence of a number in an array  

#include<iostream>
using namespace std;

// for first occurence
int firstocc(int arr[],int n,int i,int key)      // int i is pointer to store position and key is the value that we hav to find.
{
    if (i==n)           // searching till end of array
    {
        return -1;     //  it means we didn't get the key in array 
    }  
    
    if (arr[i]==key)
    {
        return i;
    } 
    else{
        return firstocc(arr,n,i+1,key);
    }
}

// for last occurence
int lastocc(int arr[],int n,int i,int key)      
{
    if (i==n)          
    {
        return -1;      
    }

    int restArray=lastocc(arr,n,i+1,key);
    if (restArray != -1)
    {
        return restArray;     
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    return -1;

}

int main(){

    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;
    
    return 0;
}