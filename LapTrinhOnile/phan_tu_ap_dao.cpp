#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int max = 0, k = 0;
    for (auto x : mp) {
        if (x.second > n / 2) {
            k = x.second;
            max = x.first;
        }
    }
    if (k != 0) {
        cout << max;

    } else {
        cout << "khong co phan tu ap dao ";
    }
}