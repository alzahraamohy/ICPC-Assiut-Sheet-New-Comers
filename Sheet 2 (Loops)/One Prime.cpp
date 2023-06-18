//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) { // 1 is not a prime number
        return false;
    }
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (is_prime(n)) {
        cout <<"YES" << endl;
    } else {
        cout <<"NO" << endl;
    }
    
    return 0;
}
