#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> st;

    int sum = 0;
    int temp = k;
    while(true) {
        sum += temp;
        if(sum <= d) {
            st.insert(sum);
        } else {
            break;
        }
    }
    int sum_1 = 0;
    int temp_1 = l;
    while(true) {
        sum_1 += temp_1;
        if(sum_1 <= d) {
            st.insert(sum_1);
        } else {
            break;
        }
    }

    int sum_2 = 0;
    int temp_2 = m;
    while(true) {
        sum_2 += temp_2;
        if(sum_2 <= d) {
            st.insert(sum_2);
        } else {
            break;
        }
    }

    int sum_3 = 0;
    int temp_3 = n;
    while(true) {
        sum_3 += temp_3;
        if(sum_3 <= d) {
            st.insert(sum_3);
        } else {
            break;
        }
    }

    cout << st.size() << "\n";
    return 0;
}