#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int num = n-1;
    int odd = 0;        //奇个数字符
    int flag = 0;       //交换次数

    for(int i = 0; i < num; i++)
    {
        for(int j = num; j >= i; j--)
        {
            if(j == i)
            {
                if(n%2==0 || odd==1)
                {
                    cout << "Impossible";
                    return 0;
                }
                odd += 1;
                flag += n/2 - i;
            }
            else if(s[i] == s[j])
            {
                for(int k = j; k < num; k++)
                {
                    swap(s[k], s[k+1]);
                    flag++;
                }
                num--;
                break;
            }
        }
    }    
    cout << flag;
    return 0;
}