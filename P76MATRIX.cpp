// Matrix Multiplication

#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    cout<<"Enter the order of matrix: ";
    cin>>n1>>n2>>n3;

    int m1[n1][n2];   // --> defining 2d array for n1 * n2
    int m2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];                  // taking input of 1st 2d array
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];                  
        }
    }

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j]=0;                  
        }
    }

    for (int i = 0; i < n1; i++)           // in matrix 1 we are iterating through all the rows 
    {
        for (int j = 0; j < n3; j++)      // iterating through columns & n3 becaz it has 3 columns
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];  // k--> 1st columns = 2nd matrix rows
            }
        }
    }

    for(int i=0; i<n1; i++) 
    {
        for(int j=0 ;j<n3; j++) 
        {
           cout << ans[i][j] << "the ans is\n ";
        }
        cout << "\n";
    }
    return 0;
}