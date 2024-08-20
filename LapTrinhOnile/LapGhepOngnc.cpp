#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    priority_queue<int, vector<int>, greater<int>> p(v.begin(), v.end());
    ll x = 0;
    while (p.size() > 1) {
        ll t = 0;
        ll t1 = p.top();
        p.pop();
        ll t2 = p.top();
        p.pop();
        t = t1 + t2;
        x += t;
        p.push(t);
    }
    cout << x;
}
