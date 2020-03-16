#include<iostream>
using namespace std;


void GetTwoInts(int* a, int* b)
{
    cin >> *a >> *b;
}

int main()
{
    int a,b;
    GetTwoInts(&a, &b);
    cout << a+b;
    return 0;
}