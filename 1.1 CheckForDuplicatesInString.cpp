#include <iostream>
#include<unordered_map>
using namespace std;

bool checkstring(string s1)
{
    unordered_map<char,bool> mp;
    for ( char c: s1)
    {
        if ( mp[c] == 1)
        {
            return false;
        }
        else
        {
            mp[c] = 1;
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
