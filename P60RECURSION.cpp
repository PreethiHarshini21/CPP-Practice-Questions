// Generate all substrings of a string

#include<iostream>
using namespace std;

void subseq(string s,string ans)
{
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans);             //not addind anything
    subseq(ros,ans+ch);          // adding char
}

int main(){

    subseq("ABC","");
    cout<<endl;

    return 0;
}