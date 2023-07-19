#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s1 =  "Icosahedron";
    string s2 = "Tetrahedron";
    string s3 = "Cube";
    string s4 = "Octahedron";
    string s5 = "Dodecahedron";

    int result = 0;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(s == s1) 
            result += 20;
        else if(s == s2)
            result += 4;
        else if(s == s3)
            result += 6;
        else if(s == s4)
            result += 8;
        else
            result += 12;
    }

    cout << result << "\n";
    return 0;
}