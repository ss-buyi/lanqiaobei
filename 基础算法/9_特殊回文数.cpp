#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 10000; i <= 999999; i++)
    {
        if(i<100000)
            if(i/10000 == i%10 && (i/1000)%10 == (i/10)%10)
                if(i/10000 + (i/1000)%10 + (i/100)%10 +(i/10)%10 + i%10 == n)
                    cout << i << endl;
        if(i>=100000)
            if(i/100000 == i%10 && (i/10000)%10 == (i/10)%10 && (i/1000)%10 == (i/100)%10)
                if(i/100000+ (i/10000)%10 + (i/1000)%10 + (i/100)%10 + (i/10)%10 + i%10 == n)
                    cout << i << endl;

    }
    return 0;
}