#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, m, x;
    cin >> n >> k >> m;
    queue<long long> q;
    long long sum = 0, t;
    for (int i = 1; i <= n + k - 1; i++) {
        if (i <= n) {
            cin >> x;
        } else {
            x = 0;
        }
        q.push(x);
        while (q.size() > k) {
            q.pop();
        }
        t = 0;
        while (!q.empty()) {
            if (q.front() <= m) {
                t += q.front();
                q.pop();
            } else {
                q.front() = q.front() - m;
                t = m;
                break;
            }
        }
        sum += t;
    }
    cout << sum;
}