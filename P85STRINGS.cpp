// STRING FUNCTIONS

// 1.APPEND

#include<iostream>
#include<string>

using namespace std;
int main(){
    string str;

    string s1="fam";  
    string s2="ily";

    s1.append(s2);                // (1.)

    // s1=s1+s2;
    // cout<<s1<<endl;

    // (2.) at() or access function(to access a particular function)
    // cout<<s1[1]<<endl;

    // (3.) clear()
    s1.clear();
    
    return 0;
}