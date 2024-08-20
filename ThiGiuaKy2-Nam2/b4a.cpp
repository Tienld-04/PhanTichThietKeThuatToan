#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int main() {
    Tienld;
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    vector<int> v(n, -1);
    queue<int> q;
    v[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int i = 1; i <= d; ++i) {
            if (curr + i >= n) {
                break;
            }
            if (s[curr + i] == '1' && v[curr + i] == -1) {
                v[curr + i] = v[curr] + 1;
                q.push(curr + i);
            }
        }
    }

    if (v[n - 1] == -1) {
        cout << -1;
    } else {
        cout << v[n - 1];
    }

    return 0;
}