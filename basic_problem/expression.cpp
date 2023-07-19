#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int way_one = a + ( b * c);
    int way_two = a * (b + c);
    int way_three = a * b * c;
    int way_four = (a + b) * c;
    int way_five = a + b + c;

    int res = max(max(max(max(way_one, way_two), way_three), way_four), way_five);

    cout << res << "\n";
    return 0;
}