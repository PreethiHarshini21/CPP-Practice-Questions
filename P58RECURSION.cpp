//  Remove all duplicates from string

#include<iostream>
using namespace std;

string removeDup(string s)
{
   if (s.length()==0)
   {                          // base case
       return "";
   }

   char ch=s[0];                             // 1st char is stored
   string ans= removeDup(s.substr(1));       // func called for rest of string and this removes dup n stored in ans

   if (ch==ans[0])
   {
       return ans;
   }
   return(ch+ans);  // here becaz not getting duplicated so char getting included
   
}

int main(){

    cout<<removeDup("aaaabbbeeecdddd")<<endl;

    return 0;
}