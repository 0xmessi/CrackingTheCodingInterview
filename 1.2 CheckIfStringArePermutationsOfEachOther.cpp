// Assuming charcter set is ASCII
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkstring(string s1, string s2)
{
    if( s1.length() != s2.length() )
    {
        return false;
    }
    bool charsins1[128];
    memset(charsins1,0,sizeof(charsins1));
    bool charsins2[128];
    memset(charsins2,0,sizeof(charsins2));
    
    for(char c: s1)
    {
        charsins1[c] += 1;
    }
    for(char c : s2)
    {
        charsins2[c] += 1;
    }
    for(int i=0 ; i<128 ; i++)
    {
        if(charsins1[i] != charsins2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << "Are the strings permutations of each other ?" << endl << checkstring(s1,s2);
    return 0;
}
