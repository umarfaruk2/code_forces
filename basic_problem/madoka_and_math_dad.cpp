#include <bits/stdc++.h>
using namespace std; 

vector<int> sum_of(int n) {
    vector<int> ans1;
    vector<int> ans2;
    int sum1 = 0;
    int sum2 = 0;
    while(1) {
        if(sum1 == n) {
            return ans1;
        } else {
            sum1 += 2;
            ans1.push_back(2);
            if(sum1 == n)
                return ans1;
            sum1 += 1;
            ans1.push_back(1);
        }

        if(sum2 == n) {
            return ans2;
        } else {
            sum2 += 1;
            ans2.push_back(1);
            if(sum2 == n) {
                return ans2;
            }
            sum2 += 2;
            ans2.push_back(2);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> ans = sum_of(x);
         for(auto val : ans) {
            cout << val;
        } 
        cout << "\n";
    } 
    return 0;
}