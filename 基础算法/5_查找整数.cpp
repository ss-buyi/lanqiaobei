#include<iostream>
using namespace std;

int main()
{
    int arr[1001];
    int n, a, place=-1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            place = i+1;
            break;
        }
    }
    cout << place;
    return 0;
}