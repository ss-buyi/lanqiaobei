//  问题描述
// 求1+2+3+...+n的值。

// 输入格式
// 输入包括一个整数n。

// 输出格式
// 输出一行，包括一个整数，表示1+2+3+...+n的值。

// 样例输入
// 4

// 样例输出
// 10

// 样例输入
// 100

// 样例输出
// 5050

// 数据规模与约定
// 1 <= n <= 1,000,000,000。 


//代码
#include<iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	long long int a, b;
	cin >> a;
	b = a * (a + 1) / 2;
	cout << b << endl;
	return 0;
}