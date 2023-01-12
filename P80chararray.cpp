// Check Palindrome

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"how many words:";
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;   // considering initial condition to be true
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])   // becaz simultaneously checking other letters too
        {
            check=0;
            break;
        }
    }

    if (check == true)
    {
        cout<<"Word is PALINDROME"<<endl;
    } else{
        cout<<"Word is not PALINDROME"<<endl;
    }
    return 0;
}