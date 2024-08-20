#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    queue<int> q;
    q.push(0);
    map<int, int> M;
    M[0] = 0;
    while (q.size()) {
        int u = q.front();
        q.pop();
        for (auto v : a)
            if (v + u <= 1e4 && M.find(v + u) == M.end()) {
                q.push(v + u);
                M[v + u] = M[u] + 1;
            }
    }
    if (M.find(m) == M.end())
        M[m] = -1;
    cout << M[m] << "\n";
}