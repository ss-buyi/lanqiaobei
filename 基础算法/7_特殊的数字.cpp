#include<iostream>
using namespace std;

int main()
{
    int a, b, c;                              // 百分位；十分位；个位
    for(int i = 111; i < 999; i++)
    {
        a = i/100;
        b = (i/10)%10;
        c = i%10;

        if(i == a*a*a + b*b*b + c*c*c)
        {
            cout << i << endl;
        }
    }
    return 0;
}