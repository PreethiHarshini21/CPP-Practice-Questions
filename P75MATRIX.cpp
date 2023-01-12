// Matrix Transpose

#include<iostream>
using namespace std;

int main(){

int n = 3;
int A[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        int temp = A[i][j];               // just swapping is involved
        A[i][j] = A[j][i];
        A[j][i] = temp;
    }
}

for(int i=0; i<n; i++) {
    for(int j=0 ;j<n; j++) 
    {
        cout << A[i][j] << " ";
    }
    cout << "\n";
}
    
    return 0;
}