#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s1;
    string s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++)  {
        if(s1[i] == '1' && s2[i] == '0' || s1[i] == '0' && s2[i] == '1') {
            cout << "1";
        } else {
            cout << "0";
        }
    }

    cout << "\n";
    return 0;
}