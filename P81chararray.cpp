// Largest word in a sentence

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    // to input the sentence

    cin.getline(arr,n); // it takes full sentence as input including "spaces" within dat sentence without storing in separate variable
    cin.ignore();       // it removes the buffer

    int i=0;
    int currLen=0, maxLen=0;
    int st=0,maxst=0;  //st->start (it gives the index) & maxst gives ans of max word

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')     // if space is present
        {
            if (currLen>maxLen)
            {
                maxLen=currLen;
                maxst = st;
            }
            currLen=0;  // this becaz after space a fresh word begins
            st=i+1;     
        } else
            currLen++;            // space not present,just the curr length increases


        if (arr[i]=='\0')      // when sentence gets over then it breaks
        {
        break;
        }
        i++;
    }

    cout<<maxLen<<endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
return 0;
}