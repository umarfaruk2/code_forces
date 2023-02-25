#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    n++;
    int flag = true;
    while(flag) {
        string st_year = to_string(n);
        sort(st_year.begin(), st_year.end());

        for(int i = 1; i < st_year.size(); i++) {
            if(st_year[i] == st_year[i-1]) {
                flag = true;
                n++;
                break;
            } else 
                flag = false;
        }
    }

    cout << n << "\n";
    return 0;
}