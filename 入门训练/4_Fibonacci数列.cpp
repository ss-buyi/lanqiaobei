
// 问题描述

// Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。

// 当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
// 输入格式
// 输入包含一个整数n。
// 输出格式
// 输出一行，包含一个整数，表示Fn除以10007的余数。

// 说明：在本题中，答案是要求Fn除以10007的余数，因此我们只要能算出这个余数即可，而不需要先计算出Fn的准确值，再将计算的结果除以10007取余数，直接计算余数往往比先算出原数再取余简单。
// 样例输入
// 10
// 样例输出
// 55
// 样例输入
// 22
// 样例输出
// 7704
// 数据规模与约定
// 1 <= n <= 1,000,000。


//代码
#include<iostream>
using namespace std;

long long int arr[1000001];

int main(int argc, char const *argv[])
{
	long long int a;
	cin >> a;
	arr[0] = arr[1] = 1;
	if(a > 2)
	{
		for(long long int i = 2; i < a; i++)
		{
			arr[i] = ( arr[i - 1] + arr[i - 2]) % 10007;
		}
		cout << (arr[a - 1]);
		return 0;
	}
	else
		cout << '1';
	return 0;
}