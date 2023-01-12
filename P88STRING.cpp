// string challenges

// converting entire string into either uppercase or lowercase

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    // string str="fgfgvhg";
    // cout<<'a'-'A';    // this is done to check the ascii of difference b/w lower n uppercase value

    // convert into upper case

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i]<='z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout<<str<<endl;

    // // convert into lower case

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i]<='Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout<<str;

    // this process can be simplified using TRANSFORM() FUNCTION

   string s="vdhwdhjkw";
   // uppercase
   transform(s.begin(),s.end(),s.begin(),::toupper);
   cout<<s<<endl;

   // lowercase
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout<<s<<endl;

    
    
    return 0;
}