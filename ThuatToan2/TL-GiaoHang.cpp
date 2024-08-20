#include <bits/stdc++.h>
using namespace std;
vector<long> A[100005];
int main() {
    priority_queue<long> Q;
    int n, MaxTime = 0, res = 0, t, v;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t >> v;
        if (MaxTime < t)
            MaxTime = t;
        A[t].push_back(v);
        // A[1] sẽ tiền thưởng {3}.
        // A[2] sẽ chứa ----- {4, 2}.
        // A[3] sẽ chứa ------ {5, 7}.
        // A[4] sẽ chứa ------- {1}.
    }
    for (int i = MaxTime; i > 0; i--) {
        for (auto x : A[i]) {
            Q.push(x);
        }
        if (Q.size()) {
            res += Q.top();
            Q.pop();
        }
    }
    cout << res;
}