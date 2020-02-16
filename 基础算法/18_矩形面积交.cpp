#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x1, y1, x2, y2;
	double x3, y3, x4, y4;
	double m1, m2, n1, n2;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	m1 = min(max(x1,x2), max(x3,x4));
	n1 = min(max(y1,y2), max(y3,y4));
	m2 = max(min(x1,x2), min(x3,x4));
	n2 = max(min(y1,y2), min(y3,y4));
	if(m1>m2 && n1>n2)
    {
    	cout << setiosflags(ios::fixed) << setprecision(2);
    	cout << (m1-m2)*(n1-n2) << endl;
    }
	else
	    cout << "0.00" << endl;
	return 0;
}