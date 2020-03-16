#include<iostream>
using namespace std;



int GreatestCommonDivisor(int a, int b)

{
    int temp;
    int t;

    if (a < b)

    {

        temp = a;

        a = b;

        b = t;

    }    

    while (b != 0)

    {

        t = a % b;

        a = b;

        b = t;

    }

    return a;

}

int main()
{
    int a, b;
    while(1)
    {
        cin >> a >> b;
        cout << GreatestCommonDivisor(a, b);
    }
    return 0;
} 
