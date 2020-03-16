#include<iostream>
#include<cstdlib>
using namespace std;

int swap(const void * a, const void * b)
{
    return *(int*)b - *(int*)a;
}

int main()
{
    int n;
    int arr[1006];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    qsort(arr, n, sizeof(int), swap);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}