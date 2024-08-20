#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int cnt = 0;
    for (auto x : v) {
        int d = n / x;
        cnt += d;
        n = n - d * x;
        if (n % x < 1000 && n % x != 0) {
            cnt = -1;
        }
    }
    cout << cnt;
}