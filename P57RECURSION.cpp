// Tower of Hanoi

#include<iostream>
using namespace std;

void TowerofHanoi(int n,char src,char dest,char helper)
{
    if (n==0)
    {
        return;        // base case
    }
    
    TowerofHanoi(n-1,src,helper,dest);            // here the blocks move from source(src) to helper rod
    cout<<"move from "<<src<<" to "<<dest<<endl;
    
    TowerofHanoi(n-1,helper,dest,src);
}

int main(){
    
    TowerofHanoi(3,'A','C','B');              //func call

    return 0;
}