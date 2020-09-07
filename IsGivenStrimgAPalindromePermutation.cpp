/*
Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palin-
drome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
EXAMPLE
Input: Tactcoa
Output: True (permutations: "tacocat". "atcocta". etc.)
*/
#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if( s.length() < 1) return false;
    if(s.length() == 1) return true;
    bool ar[128];
    memset(ar,0,sizeof(ar));
    
    for( char c : s)
    {
        ar[(int)c] = !ar[(int)c];
    }
    int count = 0;
    for(int i=0 ; i<128; i++)
    {
        if( ar[i] )
        {
            count++;
        }
    }
    if( count == 0) return true;
    if( (count == 1) && (s.length() & 1) ) return true;
    return false;
}
int main()
{
   string s;
   cin >> s;
    cout << "Is the string a palendrome permutation ? " <<s <<" : "<< check(s) ;
    return 0;
}
