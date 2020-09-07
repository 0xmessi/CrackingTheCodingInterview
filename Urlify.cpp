#include <bits/stdc++.h>
using namespace std;

string urlify(string s)
{
    int ptr = s.length() - 1;
    
    while( isspace(s[ptr])) ptr--;
    for( int index = s.length()-1 ; index >= 0 ; index)
    {
        if( isspace( s[ptr]) )
        {
            s[index] = '0';
            s[index--] = '2';
            s[index--] = '%';
            ptr--;
        }
        else
        {
            s[index--] = s[ptr--];
        }
    }
    return s;
}
int main()
{
   string s;
    s = "hello there B    ";
    s = urlify(s);
    cout << s;
    return 0;
}
