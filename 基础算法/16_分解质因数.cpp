#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    int arr[10005] = {2}, num = 1;
    cin >> a >> b;
    for(int i = 3; i <= b; i++)
    {
        bool a1 = true;
        for(int j = 0; j < num; j++)
        {
            if( i%arr[j] )
                continue;
            else
            {
                a1 = false;
                break;     
            }      
        }
        if(a1)
            arr[num++] = i;
    }



    for(int i = a; i <= b; i++)
    {
        cout << i <<"=";
        int x = i;
        for(int j = 0; j < num;)
        {
            if( x%arr[j] == 0)
            {
                if(x/arr[j]==1)
                {
                    cout << arr[j] << endl;
                    break;
                }   
                else
                {
                    cout << arr[j] << "*";
                    x = x/arr[j];
                }
                
            }
            else 
                j++;
        }
    }
    return 0;
}
