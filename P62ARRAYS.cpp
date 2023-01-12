// Calculate Average of Numbers Using Arrays

#include<iostream>
using namespace std;

int main(){

int n,i;
int num[100],sum=0,average;

cout<<"enter the number the data or size ";
cin>>n;

while (n>100 || n<=0)
{
    cout<<"should not be >100 or <=0";
}

for (int i = 0; i < n; i++)
{
    cout << i + 1 << ". Enter number: ";
    cin >> num[i];
    sum += num[i];
}

average = sum/n;
cout<<"average: "<<average;

    return 0;
}