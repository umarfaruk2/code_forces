// #include <bits/stdc++.h>
// using namespace std; 

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     string s;
//     cin >> s;

//     string sub_str = "WUB";

//     int index = 0;
//     string check_str = "";
//     string space = " ";
//     string new_str = "";
//     int i = 0;

//     while(i < s.size()) {
//         if(s[i] == sub_str[index]) {
//            index++;
//            new_str += s[i];
//            if(index == 3) {
//                 index = 0;
//            }
//         } else {
//             if(new_str[new_str.size() - 1] == 'W') {
//                 cout << "add last one - " << new_str << "\n";
//                 check_str += new_str[new_str.size() - 1];
//             }
//             check_str += s[i];
//             // if(s[i + 1] == 'W' && i != s.size()) {
//             if(i + 1 < s.size() && s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B') {
//                 check_str += space;
//             }
//             new_str = "";
//             index = 0;
//         }
//         i++;
//     }  

//     cout << check_str << "\n";
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i = i+2;
            cout << " ";
        } else {
            cout << s[i];
        }
    }
    return 0;
}

