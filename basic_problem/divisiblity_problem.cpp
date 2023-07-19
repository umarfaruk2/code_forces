#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if(a < b) {
            cout << b - a << "\n";
        } else {
            int reminder = a % b;
            int step = 0;

            if(reminder != 0)
                step = b - reminder;
            cout << step << "\n";
        } 
    } 
    return 0;
}