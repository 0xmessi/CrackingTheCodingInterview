#include <iostream>
#include<algorithm>
using namespace std;

bool checkstring(string s1)
{
    sort( s1.begin(),s1.end() );
    for(int i=0 ; i<s1.length()-1; i++)
    {
        if( s1[i] == s1[i+1] )
        {
            return false;
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
