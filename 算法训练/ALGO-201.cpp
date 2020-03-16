#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int a;
    cin >> a; 
    if (a < 0)
    {
        cout << 0;
        return 0;
    }
    long long int b = (int)sqrt(a);
    if (b*b < a)
        b++;
    cout << b*b;
    return 0;
}