// Character Arrays

// to access each and every letter in the character array

#include<iostream>
using namespace std;

int main(){

    char arr[100]="abhishek";
    int i=0;                              

    while (arr[i] != '\0')          
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}