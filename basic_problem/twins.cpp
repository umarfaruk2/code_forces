#include <bits/stdc++.h>
using namespace std;

int calculate_coin(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int half = sum/2;
    int my_sum = 0;
    int ans = 0;
    for(int i  = 0; i < arr.size(); i++) {
        if(my_sum > half) {
            break;
        }
        my_sum += arr[i];
        ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int min_coin = calculate_coin(arr);
    
    cout << min_coin << "\n";
    return 0;
}