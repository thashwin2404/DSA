// Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.


// Example:
// Input: The character is 'a'.

// Output: 0


#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int b;
    if(islower(c))
    {
        b=0;
    }
    else if(isupper(c))
    {
        b=1;
    }
    else
    {
        b=-1;
    }
    cout<<b;
}