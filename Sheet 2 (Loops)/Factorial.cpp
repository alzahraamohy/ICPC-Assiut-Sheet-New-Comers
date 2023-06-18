//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	while(x--){
	    cin>>y;
	    long long factorial=1;
	    for(int j=1;j<=y;j++){
	        factorial*=j;
	    }
	    cout<<factorial<<endl;
	}
	return 0;
}
