#include <bits/stdc++.h>
using namespace std;
int n, M, a[105], b[105], c[105][10004] = {};
void trace(int n, int M) {
    if (c[n][M] == 0)
        return;

    while (c[n][M] == c[n - 1][M])
        n--;
    trace(n - 1, M - a[n]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        for (int j = 1; j <= M; j++) {
            c[i][j] = j < a[i] ? c[i - 1][j] : max(c[i - 1][j], b[i] + c[i - 1][j - a[i]]);
        }
    }
    int x;
    cin >> x;
    while (x--) {
        cin >> M;
        cout << c[n][M];
        trace(n, M);
    }
}