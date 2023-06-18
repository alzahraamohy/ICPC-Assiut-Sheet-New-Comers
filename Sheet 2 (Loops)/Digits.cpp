//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include <iostream>
using namespace std;

int main(){
    int n ,store; cin >> n; 
    for (int i = 0; i<n; i++){
        int x;
        cin >> x;
        if (x == 0) cout << 0;
        else {
            while(x){
            store = x%10;
            cout << store << " ";
            x /= 10;
            
        } 
        }cout << endl;
    }
    
    
}
