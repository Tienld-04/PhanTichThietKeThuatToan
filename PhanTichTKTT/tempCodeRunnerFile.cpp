#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, u, v, k = 0, res = 0, dem;
    cin >> n >> m;
    int d[n + 5] = {};
    vector<int> A[n + 5];
    while (m--) {
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        if (d[i] == 0) {
            k++;
            dem = 1;
            d[i] = 1;
            stack<int> S;
            S.push(i);
            while (S.size()) {
                u = S.top();
                S.pop();
                for (int v : A[u])
                    if (d[v] == 0) {
                        d[v] = 1;
                        dem++;
                        S.push(v);
                    }
            }
            if (res < dem)
                res = dem;
        }
    cout << k << " \n"
         << res;
}