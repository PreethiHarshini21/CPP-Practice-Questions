// sorting a string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1="hswhsbhjbhhjbbb";

    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    
    return 0;
}