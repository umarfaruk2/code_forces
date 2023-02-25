#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    map<int, int> mp;
    for(int i = 1; i <= arr.size(); i++) {
       mp[arr[i]] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << mp[i] << " ";
    }
    cout << "\n";
    return 0;
}