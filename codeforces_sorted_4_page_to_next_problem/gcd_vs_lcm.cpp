#include <bits/stdc++.h>
using namespace std; 

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    return gcd(b%a, a);
}

int lcm(int a, int b) {
    int gcd_res = gcd(a, b);
    return (a*b)/gcd_res;
}

int find_gcd_and_lcm(int n) {
    for(int i = 1; i <= n; i++) {
        
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    find_gcd_and_lcm(n);
    return 0;
}