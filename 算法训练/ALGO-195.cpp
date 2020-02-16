#include<iostream>
using namespace std;

int cishu(int n)
{
    int sum=0;
    for ( ; n!=0; n/=10)
    {
        if(n%10 == 1)
            sum++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i = 1; i < n+1; i++)
    {
        sum += cishu(i); 
    }
    cout << sum;

    return 0;
} 
