//PL : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    long long arr[x];
    for(int i=0; i<x; i++) {
        cin >> arr[i];
        if(arr[i]>0)
            cout<<1<<" ";
        else if(arr[i]<0)
            cout<<2<<" ";
        else if(arr[i]==0)
            cout<<0<<" ";
    }
    return 0;
}
