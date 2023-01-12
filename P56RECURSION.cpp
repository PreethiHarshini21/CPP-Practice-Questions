// Replace pi with 3.14 in string

#include<iostream>
using namespace std;

void replacePi(string s)
{
    if (s.length()==0)
    {
        return;                // base case
    }

    if (s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));    // substr(2) means we got to remove 1st 2 characters of string and then rest after it will get back to function.
    } 
    else{
        cout<<s[0];
        replacePi(s.substr(1));   // here 1 becaz v r printing one character then after it rest characters move to function.
    }
    
}

int main(){

     replacePi("pippppiiiipi");
    
    return 0;
}