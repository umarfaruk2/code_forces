#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    bool is_uppercase = true;
    bool is_first_lower = true;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 97) {
            is_uppercase = false;
            break;
        }
    }
    
        for(int i = 1; i < s.size(); i++) {
            if(s[i] >= 97) {
                is_first_lower = false;
                break;
            }
        }

    if(is_uppercase) {
        for(int i = 0; i < s.size(); i++) {
            s[i] += 32;
        }
    } else if(is_first_lower) {
        s[0] -= 32;
            for(int i = 1; i < s.size(); i++) {
                if(s[i] < 97) {
                    s[i] += 32;
                } 
            }
    } else {
        cout << s << "\n";
        return 0;
    }

    cout << s << "\n";
    return 0;
}