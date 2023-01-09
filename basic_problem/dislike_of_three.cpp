#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int i = 1, flag = 1;
        while(1) {
            if (i%3 != 0 && i%10 != 3) {
                if (flag == n) {
                    cout << i << endl;
                    break;
                }
                flag++;
            }
            i++;
        }
    }
    return 0;
}