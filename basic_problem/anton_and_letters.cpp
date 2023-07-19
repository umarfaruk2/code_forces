#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    set<char> st;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ' && s[i] != '{' && s[i] != '}' && s[i] != ',') {
            st.insert(s[i]);
        }
    }
    cout << st.size() << "\n";  
    return 0;
}