#include<iostream>
using namespace std;

int main()
{
    string s="";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
            s[i] -= 32;
        else if(isupper(s[i]))
            s[i] += 32;
    }

    cout << s;
    return 0;
}