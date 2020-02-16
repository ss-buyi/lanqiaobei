#include<iostream>
using namespace std;

int main()
{
    string s="";
    int n;
    char x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s += x;
    }

    for (int i = 0; i < n; i++)
    {
        if(s[i]-'0' == 0)
        {
            s.erase(i, 1);
            i--;
        }
    }
    
    cout << s.length() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    
    return 0;
} 
