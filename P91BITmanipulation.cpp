// BIT MANIPULATION

#include<iostream>
using namespace std;

// (1.) getbit
int getBit(int n, int position){
    return ((n & (1<<position))!=0);
}

// (2.) setbit
int setBit(int n, int position){
    return (n | (1<<position));
}

// (3.) clearbit
int clearBit(int n, int position){
    int mask= ~(1<<position);
    return (n & mask);
}

// (4.) updatebit
int updateBit(int n, int position,int value){
    int mask= ~(1<<position);
    n=n&mask;
    return (n |(value<<position));
}



int main(){

    cout<<getBit(5,2)<<endl; 
    cout<<setBit(5,1)<<endl; 
    cout<<clearBit(5,2)<<endl; 
    cout<<updateBit(5,1,1)<<endl; 
    return 0;
}