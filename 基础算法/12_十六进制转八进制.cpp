#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string data, bin="", octal="";
        cin >> data;
        for(int i = 0; i < data.size(); i++)
        {
            switch(data[i])
            {
                case '0':bin+="0000";break;
                case '1':bin+="0001";break;
                case '2':bin+="0010";break;
                case '3':bin+="0011";break;
                case '4':bin+="0100";break;
                case '5':bin+="0101";break;
                case '6':bin+="0110";break;
                case '7':bin+="0111";break;
                case '8':bin+="1000";break;
                case '9':bin+="1001";break;
                case 'A':bin+="1010";break;
                case 'B':bin+="1011";break;
                case 'C':bin+="1100";break;
                case 'D':bin+="1101";break;
                case 'E':bin+="1110";break;
                case 'F':bin+="1111";break;
                default:break;
            }
        }

        int len = bin.size();
        if(len % 3 == 1)
        {
            bin = "00" + bin;
            len += 2;
        }
        else if(len % 3 == 2)
        {
            bin = "0" + bin;
            len += 1;
        }

        for(int i = 0; i < len; i+=3)
        {
            int d = (bin[i]-'0')*4 + (bin[i+1]-'0')*2 + (bin[i+2]-'0');
            octal+=(d+'0');
        }

        int p = 0;
        while(octal[p]=='0') p++;
        for(; p < octal.size(); p++)
            cout << octal[p];
        cout << endl;

    }
    
    return 0;
}