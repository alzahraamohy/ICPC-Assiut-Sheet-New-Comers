//PL:https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include<iostream>
using namespace std;
int main()
{
	long long x, y, z, mn;
	cin >> x >> y >> z;
	
	mn = min(x,min(y,z));
	x = x - mn;
	z = z - mn;
	
	if (x / 2 >= z)
		cout << z + mn;
	else
		cout << x / 2 + mn;
		
		
		
	return 0;
}
