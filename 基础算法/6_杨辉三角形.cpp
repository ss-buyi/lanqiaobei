#include<iostream>
using namespace std;

int main()
{
    int arr[35][35] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i==j || j==0)
            {
                arr[i][j] = 1;
                cout << 1 << " ";
                if(i==j)
                {
                    cout << endl;
                    break;
                }
                continue;
            }
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            cout << arr[i][j] << " ";
        }

    }
    
    return 0;
}