#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int max, min, sum=0;
    int n, number;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        sum += number;
        if(i == 0)
        {
            max = number;
            min = number;
            continue;
        }
        if (number > max)
            max = number;
        if (number < min)
            min = number;
    }
    cout << max << endl;
    cout << min << endl;
    cout << sum << endl;
    return 0;
}
