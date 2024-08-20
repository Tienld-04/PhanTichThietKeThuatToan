#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 1; x <= n / 2; x++) {
        if (n % x == 0 && (n - x) % 2 == 0) {
            if (n - x == 1)
                cout << "tmt";
            else {
                cout << "nqs";
            }
        } else if (n % x == 0 && (n - x) % 2 != 0) {
            if (n - x == 1)
                cout << "tmt";
            else {
                cout << "nqs";
            }
        }
    }
}