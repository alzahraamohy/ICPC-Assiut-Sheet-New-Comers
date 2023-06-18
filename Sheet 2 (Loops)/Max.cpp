//Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int x;
	cin>>x;
	vector<long long>arr(x);

	for(int i=0;i<x;i++)
	    cin>>arr[i];
    sort(arr.begin(),arr.end());
	cout<<arr[x-1];
	return 0;
}
