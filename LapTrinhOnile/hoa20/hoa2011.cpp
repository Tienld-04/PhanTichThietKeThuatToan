#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int k;
    cin >> k;
    unordered_map<string, int> mp;
    vector<pair<string, int>> v;
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        cin.ignore();
        for (int j = 0; j < x; ++j) {
            string s;
            getline(cin, s);
            mp[s]++;
        }
    }

    for (auto k : mp) {
        v.push_back(k);
    }

    sort(v.begin(), v.end(), [](auto a, auto b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    });
    cout << v[0].first << endl;
    if (v.size() > 1) {
        cout << v[1].first << endl;
    }

    return 0;
}