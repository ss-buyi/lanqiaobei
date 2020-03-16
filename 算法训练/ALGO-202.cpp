#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, sum=0;
    string s;
    char* p = (char*)malloc(sizeof(long long int)); 
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        memset(p, 0, sizeof(char));
        itoa(i, p, 2);
        s = p;
        sum += count(s.begin(), s.end(), '1');
    }
    
    cout << sum;
    return 0;
}