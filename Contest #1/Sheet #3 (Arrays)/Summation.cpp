//PL : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    long long arr[x], sum = 0;
    for(int i=0; i<x; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum);
    return 0;
}
