#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr;
    int group_size[5] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    } 

    for(auto item : arr)
        group_size[item]++;

    int taxi = 0; 

    taxi += group_size[4];
    if(group_size[1] != 0) {
        if(group_size[3] >= group_size[1]) {
            group_size[1] = 0;
        } else {
            group_size[1] = group_size[1] - group_size[3];
        }
    } 
    taxi += group_size[3];
    
    if(group_size[2] == 0 && group_size[1] != 0) {
        taxi += ceil(static_cast<double>(group_size[1]) / 4.0);
    } else if(group_size[1] == 0 && group_size[2] != 0) {
        taxi += ceil(static_cast<double>(group_size[2] * 2) / 4.0);
    } else if(group_size[1] != 0 && group_size[2] != 0) {
        int sum = (group_size[2] * 2) + group_size[1];
        int divided = ceil(static_cast<double>(sum) / 4.0);
        taxi += divided;
    }
    
    cout << taxi << "\n";
    return 0;
}