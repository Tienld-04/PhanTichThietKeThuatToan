#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9;

int main() {
    Tienld;
    int n;
    cin >> n;
    while (n--) {
        int s, f;
        cin >> s >> f;
        map<int, int> M;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, s});
        M[s] = 0;
        while (!pq.empty()) {
            auto u = pq.top();
            pq.pop();

            if (u.first > M[u.second])
                continue;

            if (u.second == f) {
                cout << u.first << "\n";
                break;
            }
            for (int a = 1; a * a <= u.second; a++) {
                if (u.second % a == 0) {
                    int b = u.second / a;
                    int cost = (b % a ? a + b : b / a);
                    int v = (a - 1) * (b + 1);

                    if (!M.count(v) || u.first + cost < M[v]) {
                        M[v] = u.first + cost;
                        pq.push({M[v], v});
                    }
                }
            }
        }
        if (M.find(f) == M.end()) {
            cout << -1 << "\n";
        }
    }

    return 0;
}
