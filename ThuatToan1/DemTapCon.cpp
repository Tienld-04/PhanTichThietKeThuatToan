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

int count(vector<int> &v, int n, int m) {
    int cnt = 0;
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += v[j];
            }
        }
        if (sum == m) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << count(v, n, m);
    return 0;
}