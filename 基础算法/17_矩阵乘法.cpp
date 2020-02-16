#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int arr[32][32]={0};
    long long int brr[32][32]={0};
    long long int crr[32][32];
    int n, m, num=1;
    cin >> n >> m;

    if(m == 0)
    {
        for (int  i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i == j)
                    cout << 1 << " ";
                else 
                    cout << 0 << " ";
            }
            cout << endl;
        }
        return 0;
    }

    for (int  i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[i][j];
        }

    }

    while(num < m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                crr[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    crr[i][j] += arr[i][k] * brr[k][j];
                }
    
            }
        }
        num++;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                brr[i][j] = crr[i][j];
            }
        }
    }
    


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
