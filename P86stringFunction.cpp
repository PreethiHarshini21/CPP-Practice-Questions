// String Functions

#include<iostream>
#include<string>

using namespace std;
int main(){

    // (4.) Compare
    // string s1="abc";  
    // string s2="xyz";

    // cout<< s2.compare(s1) <<endl;

    // (5.) Erase()
    // string s1="abhishek";
    // s1.erase(3,3);
    // cout<<s1 <<endl;

    // (6.) Find()
    // string s1="abhishek";
    
    // cout<<s1.find("bhi")<<endl;

    // (7.) Insert()
    // string s1="abhishek";

    // s1.insert(8, "pipuu");
    
    // cout<<s1<<endl;

    // (8.) length() or size()
    // string s1="preethiharshini";
    
    // cout<<s1.size()<<endl;

    // length() used at the time of iteration
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     cout<<s1[i]<<endl;
    // }

    // // (9.) substr()
    // string s1="abhishek";
    // string s=s1.substr(4,3);
    // cout<<s<<endl;
    
    
    // (10.) stoi()  // string to integer
    // string s1="786";
    // int x=stoi(s1);
    // cout<<x<<endl;

    // integer to string
    int x=786;
    cout<<to_string(x)<<endl;
    

    
    return 0;
}