#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkstring(string s1)
{
    if( s1.length() > 128 )
    {
        return false;
    }
    bool chars[128];
    memset(chars,0,sizeof(chars));
    for(char c: s1)
    {
        if( chars[c] )
        {
            return false;
        }
        else
        {
            chars[c] = 1;
        }
    }
    return true;
}
int main()
{
    string s1;
    cin >> s1;
    cout << "Does the string has all unique characters ?" << endl << checkstring(s1);
    return 0;
}
