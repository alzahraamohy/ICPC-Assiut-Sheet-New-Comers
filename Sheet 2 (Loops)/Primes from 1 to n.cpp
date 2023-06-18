//problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include <bits/stdc++.h>
using namespace std;

int main() {

int n; cin >> n;

for(int i = 2;i<=n;i++){

int counter = 0;

for(int j = n;j>=1;j--){
        if(i%j == 0){
            counter++;
        }
}
        if(counter == 2){
            cout << i << " ";
        }

}

	return 0;
}
