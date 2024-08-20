#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k = -10000;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        mp.insert({y, x});
    }
    int cnt = 0;
    for (auto i : mp) {
        if (i.second > k) {
            cnt++;
            k = i.first;
        }
    }
    cout << cnt;
}