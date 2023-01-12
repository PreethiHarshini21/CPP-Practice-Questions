// Check Whether a character is Vowel or Consonant.

#include <iostream>
using namespace std;

int main() {
char c;
bool isLowercaseVowel, isUppercaseVowel;

cout<<"enter any alphabet: ";
cin>>c;

isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

if (!isalpha(c))
{                                      //*note* isalpha() function checks whether the character entered is an alphabet or not.
    cout<<"error! not an alphabet";      
}
else if (isLowercaseVowel||isUppercaseVowel)
{
    cout<<"this is a vowel ";
}
else
{
    cout<<"this is consonant";
}

return 0;
}