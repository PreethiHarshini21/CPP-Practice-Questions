// INSERTION SORT

// Take an element from the unsorted array, place it in its corresponding position in the sorted part,and shift the elements accordingly.
 
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

    for(int i=1; i<n ; i++){   // in this sort we are not starting with 0th element but its next element which is at 1st position
        int current = arr[i];
        int j=i-1;

        while(arr[j] > current && j>=0)
        {
            arr[j+1]= arr[j];     // we r moving 1 position ahead
            j--;                  // then we move to its before element 
        }
        arr[j+1]=current;
    }
        
    for (int i = 0; i < n; i++)      // this loop is for printing array
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}