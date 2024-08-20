#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> a(n);
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
}