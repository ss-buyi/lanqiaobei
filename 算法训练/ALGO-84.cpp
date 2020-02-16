#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]-'A' < 26)
            s[i] += 32;
        else if(s[i]-'a' < 26)
            s[i] -= 32;
    }

    cout << s;
    return 0;
} 
