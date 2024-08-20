#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    set<int> a;
    set<int> b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }
    vector<int> ldt;
    for (int x : a) {
        if (b.count(x) > 0) {
            ldt.push_back(x);
        }
    }
    sort(ldt.begin(), ldt.end());
    for (int x : ldt) {
        cout << x << " ";
    }
}
