#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int len = strlen(s);
    int a = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if (a == b) {
        cout << "Friendship" << endl;
    } else if ( a > b) {
        cout << "Anton" << endl;
    } else {
        cout << "Danik" << endl;
    }
    return 0;
}