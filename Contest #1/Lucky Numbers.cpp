//PL:https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<iostream>

using namespace std;
int main()
{
	int x,second,first;
	cin>>x;
	
	second=x%10;
	first=(x-second)/10;
	
	if(second%first==0 || first%second==0)
	    cout<<"YES";
	else
	    cout<<"NO";

		
	return 0;
}
