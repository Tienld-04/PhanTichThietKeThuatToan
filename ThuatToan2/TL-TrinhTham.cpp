#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> A;

int main() {
    int n, k, x;
    cin >> n >> k;
    priority_queue<A> q;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        q.push({x, i});
        while (!q.empty() && q.top().second < i - k + 1) {
            q.pop();
        }
        if (i >= k) {
            cout << q.top().first << " ";
        }
    }

    return 0;
}