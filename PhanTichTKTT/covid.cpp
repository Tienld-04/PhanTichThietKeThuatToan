#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    list<int> A[n + 5];
    set<int> s[n + 5];
    int x, y;

    while (m--) {
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    map<int, int> M, F;
    queue<int> q;
    cin >> F[0];
    for (int i = 0; i < F[0]; i++) {
        cin >> x;
        M[x] = 0;
        s[0].insert(x);
        q.push(x);
    }
    while (q.size()) {
        int u = q.front();
        q.pop();
        for (int v : A[u])
            if (M.find(v) == M.end()) {
                q.push(v);
                M[v] = M[u] + 1;
                F[M[v]]++;
                s[M[v]].insert(v);
            }
    }
    for (auto f : F) {
        cout << "\nF" << f.first << ": " << f.second;
        // for (auto k : s[f.first])
        //     cout << k << " ";
    }
}
