// Reverse a string using recursion

#include<iostream>
using namespace std;

void reverse(string s){
    if (s.length()==0)
    {
        return;                 // base case
    }

    string ros= s.substr(1);    // ros-->rest of string  
    reverse(ros);
    cout<<s[0];               // printing the 0th element of s 
    
}

int main(){

    reverse("abhishek");
    return 0;
}