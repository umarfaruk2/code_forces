#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s = "";
    string s1 = "I hate that ";
    string s2 =  "I love that ";

   if(n == 1)  {
        cout << "I hate it\n";
        return 0;
   } else {
    for(int i = 1; i < n; i++) {
        if(i%2 != 0) {
            s += s1;
        } else {
            s += s2;
        }
    }
   }

   if(n%2 == 0) {
    s += "I love it ";
   }else {
    s += "I hate it ";
   }

    cout << s << "\n";
    return 0;
}