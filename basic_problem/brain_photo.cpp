#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int flag = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'C' || arr[i][j] == 'Y' || arr[i][j] == 'M') {
                flag = 1;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    if (flag == 0) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
    return 0;
}