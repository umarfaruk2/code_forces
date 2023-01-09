#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, a, b, c;
        cin >> n >> a >> b >> c; 
        if (n == 1) {
            if (a == 0) {
                cout << "NO" << endl;
            } else {
                if (a == 2) {
                    if (b == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                } else if (a == 3){
                    if (c == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                }
            } 
        } else if (n == 2) {
            if (b == 0) {
                cout << "NO" << endl;
            } else {
                if (b == 1) {
                    if (a == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                } else if (b == 3){
                    if (c == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                }
            }
        } else {
            if (c == 0) {
                cout << "NO" << endl;
            } else {
                if (c == 1) {
                    if (a == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                } else if (c == 2){
                    if (b == 0) {
                        cout << "NO" << endl;
                    } else {
                        cout << "YES" << endl;
                    }
                }
            }
        }
    }
    return 0;
}