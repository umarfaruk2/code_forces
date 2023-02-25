#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    deque<char> st;
    st.push_back('h');
    st.push_back('e');
    st.push_back('l');
    st.push_back('l');
    st.push_back('o');

    for(int i = 0; i < s.length(); i++) {
        if(st.front() == s[i]) {
            st.pop_front();
        } else {
            continue;
        }
    }

    if(st.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    } 
    return 0;
}