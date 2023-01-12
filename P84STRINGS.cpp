// STRINGS

#include<iostream>
#include<string>

using namespace std;

int main(){
    // diff ways of declaring string
    // string str;               // 1.
    // cin>>str;             
    // cout<<str;

    // string str1(5,'n');         // 2.
    // cout<<str1<<endl;

    string str;
    getline(cin,str);
    cout<<str<<endl;
    
    return 0;
}