#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> arr2(x);
        vector<int> ans;

        for(int j = 0; j < x; j++)
            cin >> arr2[j];

        sort(arr2.begin(), arr2.end());

        for(int k = 0; k < x-1; k++) {
           int sum = arr2[k+1] - arr2[k];
           ans.push_back(sum); 
        }

        int index = 0;
        int ans2 = INT_MAX;
        for(int j = 1; j <= ans.size(); j++) {
            if(ans[j-1] == 0) {
                index++;
            } 
            if(index == 1) {
                if(ans[j] != 0) {
                    index--;
                } 
            }
            if(index == 2)
                break;
        }
        
        if(index == 2) 
            cout << 0 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for(int i = 1; i <= ans.size(); i++) {
            if(ans[i-1] == 0 && ans[i] != 0) {
               cout << ans[i-1] + ans[i] << "\n";
               break;
            } else if( ans[i-1] != 0 && ans[i-1] != 0) {
                cout << ans[i-1] + ans[i] << "\n";
                break;
            }
            }
        }
    }

   return 0;
}

