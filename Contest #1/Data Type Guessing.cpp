//PL:https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	
    double result = (static_cast<double>(x) * y) / z;

	if((result- floor(result)) >0)
		cout << "double";
	else if (result<=2147483647)
		cout << "int";
	else
	    cout<< "long long";
		
		
		
	return 0;
}
