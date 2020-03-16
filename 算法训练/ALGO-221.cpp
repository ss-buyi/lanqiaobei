#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int s = *a;
    *a = *b;
    *b = s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}