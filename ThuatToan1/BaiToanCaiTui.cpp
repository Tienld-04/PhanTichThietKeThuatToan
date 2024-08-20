#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[25], n, M, res = 0;
void Try(int k, int T) {
    if (res == M)
        return;
    if (k - 1 == n)
        res = max(res, T);
    else {
        if (T + a[k] <= M)
            Try(k + 1, T + a[k]);
        Try(k + 1, T);
    }
}
int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // sort(a + 1, a + n + 1, greater<int>());
    Try(1, 0);
    cout << res;
    return 0;
}
