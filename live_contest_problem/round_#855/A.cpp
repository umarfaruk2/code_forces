#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string main_string = "meow";

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] < 97) {
                s[i] += 32;
            }
        }
        int index = 0;
        int check_index = 0; 
        int isVisit = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == main_string[index])  {
                check_index = index;
                isVisit++;
            } else if(s[i] == main_string[index+1] && index+1 != 5 && isVisit != 0) {
                index++;
                check_index = index;
            } else {
                check_index = 0;
                break;
            }
        }

        if(check_index+1 == 4) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}