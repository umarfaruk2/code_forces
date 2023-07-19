#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int step = 0;

    while(true) {
        if(n / 100 > 0) {
            step += n / 100;
            n = n - (100 * (n / 100));
        } else if(n / 20 > 0) {
            step += n / 20;
            n = n - (20 * (n / 20));
        } else if(n / 10 > 0) {
            step += n / 10;
            n = n - (10 * (n / 10));
        } else if(n / 5 > 0) {
            step += n / 5;
            n = n - (5 * (n / 5));
        } else {
            step++;
            n = n - 1;
        }

        if(n == 0)
            break;
    }

    cout << step << "\n";
    return 0;
}