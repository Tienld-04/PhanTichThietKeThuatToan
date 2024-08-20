#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> TT;
int main() {
    int m, n, k;
    cin >> n >> m >> k;
    queue<TT> Q;
    map<TT, int> M;
    M[{0, 0}] = 0;
    Q.push({0, 0});
    while (Q.size()) {
        int x = Q.front().first, y = Q.front().second, z = x + y;
        Q.pop();
        TT Next[] = {{0, y},
                     {n, y},
                     {x, 0},
                     {x, m},
                     {max(0, z - m), min(z, m)},
                     {min(z, n), max(0, z - n)}};
        for (auto v : Next) {
            if (M.find(v) == M.end()) {
                M[v] = M[{x, y}] + 1;
                Q.push(v);
                if (v.first == k or v.second == k) {
                    cout << M[v];
                    return 0;
                }
            }
        }
    }
    cout << "Khong dong duoc nuoc";
}