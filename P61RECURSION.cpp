// Generate all substrings of a string using ASCII number

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
    int code=ch;
    string ros= s.substr(1);

    subseq(ros, ans);                        //not addind anything
    subseq(ros, ans+ch);                     // adding char
    subseq(ros, ans+ to_string(code));     // as code is in int converting to string     

}

int main(){

    subseq("AB","");
    return 0;
}