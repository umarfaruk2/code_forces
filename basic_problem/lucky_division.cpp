#include <bits/stdc++.h>
using namespace std;

bool isLucky(int value)
{
    int n = value;
    while (n != 0)
    {
        int lastDigit = n % 10;
        if (lastDigit != 4 && lastDigit != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool isDivisible(int value)
{
    if (value % 4 == 0 || value % 7 == 0 || value % 47 == 0 || value % 74 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (isDivisible(n) || isLucky(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}