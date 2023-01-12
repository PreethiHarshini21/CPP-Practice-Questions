// passing pointers through function
// swapping 2 var using address

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    // now doing using pointers


    // swap(a,b);     // here just passed by val

    swap(&a,&b);     // here just passed by reference
    cout<<a<<" "<<b<<endl;
    
    return 0;
}